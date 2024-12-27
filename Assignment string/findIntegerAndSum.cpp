/*#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int SumOfDigit(string& s) {
    vector<string> v;
    string store = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            store += s[i];
        }
        if (s[i] == ' ' || i == s.length() - 1) {
            if (!store.empty()) {
                v.push_back(store);
                store = "";
            }
        }
    }

    string numberstore = "";
    vector<int> num;
    for (auto data : v) {
        string newString = data;
        for (int i = 0; i < newString.length(); i++) {
            if (isdigit(newString[i])) {
                numberstore += newString[i];
            }
        }
        if (!numberstore.empty()) {
            num.push_back(stoi(numberstore));
            numberstore = "";
        }
    }

    int sum = 0;
    for (auto i : num) {
        sum += i;
    }
    return sum;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << SumOfDigit(s);
}*/


//Second Method :-
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int sum = 0;

    cout << "Enter the string: ";
    getline(cin, input);
    
    string temp = "";
    
    for (char c:input){
        if(isdigit(c)){
            temp += c;
        }else if(!temp.empty()){
           sum += stoi(temp);
           temp = "";
        }
    }
    cout<<sum<<endl;
}
