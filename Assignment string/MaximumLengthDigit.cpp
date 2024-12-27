#include <iostream>
# include <string>
# include <vector>
using namespace std;

int main() {
    string str;
    cout<<"Enter the data in string :";
    getline(cin,str);
    
    int count = 0;
    int maximum = 0;
    int index = 0;
    
    vector<char>v(str.begin(),str.end());
    for (int i = 0; i<v.size(); i++){
        count++;
        if (v[i] == ' '){
            count = 0;
        }
        maximum = max(maximum,count);
    }
    
    int i;
    for (i = 0; i<v.size(); i++){
        count++;
        if(v[i] == ' '){
            count = 0;
        }else if(count == maximum){
            break;
        }
    }
    for(int j = i-maximum; j<=i; j++){
        cout<<v[j];
    }
    return 0;
}