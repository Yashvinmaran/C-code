# include <iostream>
# include <string>

using namespace std;

void Reverse(string &s){
    int i = 0;
    int j = s.length()-1;
    while(i < j){
        swap(s[i],s[j]);
        i++;j--;
    }
    cout<<s;
}

int main(){
    string s;
    cout<<"Enter the string :";
    cin>>s;
    cout<<"Reversed string is :-\n";
    Reverse(s);
    cout<<endl;
}