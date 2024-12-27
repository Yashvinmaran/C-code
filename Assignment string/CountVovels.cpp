#include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
    string str;
    cout<<"Enter the data in string :";
    getline(cin,str);
    
    int count = 0;
    
    for (auto p:str){
        if(p == 'a' || p == 'A' || p == 'e' || p == 'E' || p == 'i' || p == 'I' || p == 'o' || p == 'O' || p == 'u' || p == 'U'){
            count++;
        }
    }
    cout<<count;
    return 0;
}