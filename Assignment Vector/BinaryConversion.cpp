# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;
int main(){
    string s;
    cout<<"Enter the number :";
    cin>>s;
    vector<int>v;
    for (auto n:s){
        int num = (n-'0');
      v.push_back(num);  
    }
    
    int mul = 1;
    for (int i = 0; i<v.size(); i++){
        v[i] = (mul*v[i]);
        mul *=2;
    }
    int result = 0;
    for (auto p:v){
        result+=p;
    }
    cout<<result;
}


