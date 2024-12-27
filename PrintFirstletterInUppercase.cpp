#include <iostream>
#include <vector>
#include<string>
using namespace std;

vector<char> Upper_Case(vector<char> &v) {
    if (v.empty()) {
        return v;
    }
    
    
    if (v[0] >= 'a' && v[0] <= 'z') {
        v[0] -= 32;
    }
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == ' ' && i + 1 < v.size()) {
            if (v[i + 1] >= 'a' && v[i + 1] <= 'z') {
                v[i + 1] -= 32;
            }
        }
    }

    return v;
}

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin,input);
    vector<char>v(input.begin(), input.end());
    v = Upper_Case(v);
    for (auto p : v) {
        cout << p;
    }

    return 0;
}