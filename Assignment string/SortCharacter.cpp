#include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
    string str;
    cout<<"Enter the data in string :";
    getline(cin,str);
    vector<int>vec(str.begin(),str.end());
        sort(vec.begin(), vec.end());
        for (int i = 0; i<vec.size(); i++){
            str[i] = char(vec[i]);
        }
        for (auto p:str){
            cout<<p;
        }
    return 0;
}