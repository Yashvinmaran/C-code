# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

bool check(vector<int>v, int num){
    int sum = 0;
    for (int i = 0; i<v.size(); i++){
        for (int j = i+1; j<v.size(); j++){
            sum = v[i]+v[j];
            if (sum == num){
                return true;
                
            }
        }
    }
    return false;
}
int main(){
    vector<int>v;
    int size, num;
    cout<<"Enter the size of array :";
    cin>>size;
    int input;
    cout<<"Enter the array element :\n";
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    cout<<"Enter the number that sum find :";
    cin>>num;
    
    if(check(v,num)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

