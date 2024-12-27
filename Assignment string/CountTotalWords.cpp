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
    int word = 0;
    
    for (int i = 0; i<str.size(); i++){
        count++;
        if (str[i] == ' '){
            count = 0;
        }
        if (count == 1 && str[i] != ' '){
           word++; 
        }
    }
    
    cout<<word<<endl;
    return 0;
}