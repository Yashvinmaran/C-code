#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cout << "Enter the number in string: ";
    cin >> str;
    int k = 0;
    vector<int> v;
    for (int i = 0; i < str.size(); i++) {
        int c1 = str[i];
        int c2;
        if (i < str.size() - 1) {
            c2 = str[i + 1];
        }
        if (c1 % 2 != 0 && c2 % 2 != 0) {
            v.push_back(c1);
            v.push_back('-');
        } else {
            v.push_back(c1);
        }
    }
    if (v[v.size()-1] == '-'){
            v.pop_back();
        }
    string result;
    for (auto data : v) {
        result += char(data);
    }
    cout << result;
    return 0;
}
