# include <iostream>
# include <vector>
# include <iterator>
# include <string>
using namespace std;
bool check(vector<int>&v1,vector<int> &v2){
    int size;
    if(v1.size()>v2.size()){
        size = v2.size();
    }else{
        size = v1.size();
    }
    for (int i=0; i<size; i++){
        if(v1[i] != v2[i]){
            return false;
            break;
        }
    }return true;
}
int main(){
    string input1,input2;
    
    cout<<"Enter the first string :";
    getline(cin,input1);
    cout<<"Enter the second string :";
    getline(cin,input2);
    vector<int> v1(input1.begin(),input1.end());
    vector<int> v2(input2.begin(),input2.end());
    if(check(v1,v2)){
        cout<<"TRUE\n";
    }else{
        cout<<"FALSE\n";
    }
    return 0;
}