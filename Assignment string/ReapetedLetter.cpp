# include <iostream>
# include <vector>
# include <string>
# include <algorithm>

using namespace std;

int countReapeat(string &str){
    int counter = 0;
    vector<int>v(str.begin(),str.end());
    sort(v.begin(),v.end());
    for (int i = 0; i<v.size()-1; i++){
        if(v[i] == v[i+1]){
            counter++;
        }
    }return counter;   
}
string HighestReapetedletter(string s){
    string store = "";
    vector<string>v;
    for (int i = 0; i<s.length(); i++){
       if (s[i] != ' '){
           store += s[i];
       }
       if (s[i] == ' ' || i == s.length()-1){
           if(!store.empty()){
           v.push_back(store);
           store = "";
           }
       }
    }
    int small = 0;
    int index = 0;
    vector<int>str;
    for (auto p:v){
       str.push_back(countReapeat(p));
    }
    for (int i = 0; i<str.size(); i++){
        if (small < str[i]){
            small = str[i];
            index = i;
        }
    }
    cout<<v[index]<<endl;
    return v[index];
}
int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    HighestReapetedletter(s);
}