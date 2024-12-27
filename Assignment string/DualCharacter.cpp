# include <iostream>
# include <string>
using namespace std;

bool check(string &str){
    int count = 0;
    for (int i = 0; i<str.length()-1; i++){
        if (str[i] == str[i+1]){
            count++;
        }
    }
    if (count == 1){
        return true;
    }
    return false;
}

int main(){
    string s;
    cout<<"Enter the string :";
    cin>>s;
    bool flag = check(s);
    if (flag){
        cout<<"TRUE\n";
    }else{
        cout<<"FALSE\n";
    }
}