// This code in o(n^2) time complexity
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;
int main(){
    vector<int>v;
    vector<int>newVector;
    int size,input;
    cout<<"Enter the size of the vector array :";
    cin>>size;
    
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    
    int product = 1;
    for (int i = 0; i<size; i++){
        product = 1;
        for (int j = 0; j<size; j++){
            if (i != j){
                product *= v[j];
            }
        }
        newVector.push_back(product);
    }
    for (auto p:newVector){
        cout<<p<<" ";
    }
}


