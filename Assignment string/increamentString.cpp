#include <iostream>
# include <string>
using namespace std;

int main() {
    string s;
    cout<<"Enter the data in string :";
    getline(cin,s);
    
    for (int i = 0; i<s.size(); i++){
        s[i]+=1;
    }
    for (auto p:s){
        cout<<p;
    }
    return 0;
}