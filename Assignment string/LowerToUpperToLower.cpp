#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cout << "Enter the number in string: ";
    cin >> str;
    int k = 0;
    vector<char>v(str.begin(),str.end());
    for (auto c:v){
        if (c >= 'a' && c <= 'z'){
            str[k++] = (c-32);
        }else{
            str[k++] = (c+32);
        }
    }
    cout<<str;
}

