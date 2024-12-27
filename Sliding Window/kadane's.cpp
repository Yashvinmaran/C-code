# include <bits/stdc++.h>

using namespace std; // it is the collection of identifier

int WindowSub(vector<int>&v){
    int currentSum = v[0];
    int maximum = v[0];
    
    for (int i = 1; i<v.size(); i++){
       currentSum = v[i] > (currentSum + v[i])?v[i]:(currentSum + v[i]);
       maximum = maximum>currentSum?maximum:currentSum;
    }
    return maximum;
}

int main(){
    vector<int>v;
    int size;
    cout<<"Enter the vector size :";
    cin>>size;
    int input;
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    cout<<WindowSub(v)<<endl;
}


/*#include <iostream>
#include <vector>
#include <algorithm> // For std::max
using namespace std;

int maxSub(vector<int>& v) {
    int currentSum = v[0];
    int Max = v[0]; // Initialize Max with the first element of the array
    for (int i = 1; i < v.size(); i++) {
        currentSum = max(v[i], currentSum + v[i]); // Update currentSum
        Max = max(Max, currentSum);               // Update Max
    }
    return Max;
}

int main() {
    vector<int> v{5, 2, -1, 4, 2, 3};
    cout << "The maximum subarray sum is: " << maxSub(v) << endl;
    return 0;
}*/
