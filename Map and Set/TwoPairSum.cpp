# include <iostream>
# include <vector>
# include <map>

using namespace std;

void twoSum(vector<int>&v,int target){
    map<int,int>mp;
    
    int k,n;
    for (int i = 0; i<v.size(); i++){
        n = v[i];
        k = target - n;
        
        if(mp.find(k)!=mp.end()){
            cout<<mp[k]<<" "<<i<<endl;
        }
        mp[n] = i;
    }
}

int main(){
  int size;
  cout<<"Enter the size of array :";
  cin>>size;
  
  vector<int>v;
  int input;
  for (int i = 0; i<size; i++){
      cin>>input;
      v.push_back(input);
  }
  
  int target;
  cout<<"Enter the target :";
  cin >> target;
  
  twoSum(v,target);
}