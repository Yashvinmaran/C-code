/*# include <iostream>
# include <map>
using namespace std;

int main(){
    map<int,int>mp;
    mp[4]++;
    mp[5]++;
    mp[6]++;
    mp[7]++;
    mp[5]++;
    mp[2]++;
    mp[4]++;
    mp[5]++;
    mp[5]++;
    
    for (auto p:mp){
        cout<<p.first<< " Frequency ->" <<p.second<<endl;
    }
}*/


/*# include <iostream>
# include <map>
using namespace std;

int main(){
    
    int size;
    cout<<"Enter the size :";
    cin>>size;
    int arr[size];
    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }
    
    map<int,int>mp;
    
    for (int i = 0; i<size; i++){
        mp[arr[i]]++;
    }
    
    for (auto p:mp){
        cout<<p.first<< " Frequency ->" <<p.second<<endl;
    }
}*/


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