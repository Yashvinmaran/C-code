# include <iostream>
# include <vector>
# include <string>
using namespace std;

bool check(string &s){
    for (int i = 0; i<s.length()-1; i++){
       if ((s[i] == 'e' && s[i+2] == 'g') || (s[i] == 'g' && s[i+2] == 'e')){
           return true;
       }
   }
   return false;
}

int main(){
    string s;
    int count=0;
    cout<<"Enter the string :";
    cin>>s;
    bool flag = check(s);
    if (flag){
        cout<<"TRUE\n";
    }else{
        cout<<"FALSE\n";
    }
}