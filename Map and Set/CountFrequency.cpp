# include <iostream>
# include <map>
# include <vector>
using namespace std;

void Frequency(vector<int> &v){
    map<int,int>mp;
    
    for (auto data:v){
        mp[data]++;
    }
    
    for (auto p:mp){
        cout<<p.first<< " Frequency ->" <<p.second<<endl;
    }
}

int main(){
    int size;
    cout<<"Enter the size :";
    cin>>size;
    vector<int>v;
    int input;
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    Frequency(v);
}