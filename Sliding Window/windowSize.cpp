# include <iostream>
# include <vector>
# include <math.h>
# include <climits>

using namespace std;

int main(){
    int sum = 0;
    
    vector<int>v;
    int input, size, w;
    cout<<"Enter the size of array :";
    cin>>size;
    
    cout<<"Enter the size of window :";
    cin>>w;
    
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    
    for(int i = 0; i<w; i++){
        sum+=v[i];
    }
    cout<<"The sum of "<< 1 <<"sliding window is :"<<sum<<endl;
    int maximum = INT_MIN;
    int i = 0;
    int j = w;
    while(j<v.size()){
        maximum = sum>maximum?sum:maximum; //maximum = max(sum,maximum);
        sum-=v[i++];
        sum+=v[j++];
        cout<<"The sum of "<< (1+i) <<"sliding window is :"<<sum<<endl;
    }
    cout<<"The maximum sum is :"<<sum<<endl;
}