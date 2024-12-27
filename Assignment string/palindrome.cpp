#include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
    string str1;
    cout<<"Enter the data in string :";
    getline(cin,str1);
    
    string str2(str1.rbegin(),str1.rend());
    
    if(str1 == str2){
        cout<<"TRUE \n";
    }else{
        cout<<"FALSE \n";
    }
    return 0;
}