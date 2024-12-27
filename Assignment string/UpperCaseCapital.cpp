#include <iostream>
# include <string>
# include <vector>
using namespace std;

int main() {
    string str;
    cout<<"Enter the data in string :";
    getline(cin,str);
    vector<char>s(str.begin(),str.end());
    
    for (int i = 0; i<s.size(); i++){
        if(s[0]<='z' && s[0]>='a'){
             s[i] -= 32;
         }else if (('a' <= s[i] && 'z' >= s[i])&& s[i-1] == ' '){
             s[i] -= 32;
         }
    }
    for (int i = 0; i<s.size(); i++){
        str[i] = s[i];
    }
    for (auto p:str){
        cout<<p;
    }
    return 0;
}