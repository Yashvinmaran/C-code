// First Method :-
/*# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;
int main(){
    vector<int>v;
    vector<int>vec;
    int size, counter = 0;
    cout<<"Enter the size of array :";
    cin>>size;
    int input;
    cout<<"Enter the array element :\n";
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i<v.size(); i++){
        counter = 0;
        for (int j = i+1; j<v.size(); j++){
            if (v[i] == v[j]){
                counter++;
            }
        }
        if (counter != 0){
            vec.push_back(v[i]);
        }
    }
    for (auto d:vec){
        cout<<d<<" ";
    }
}*/


//Second method :-
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;
int main(){
    vector<int>v;
    vector<int>vec;
    int size, counter = 0;
    cout<<"Enter the size of array :";
    cin>>size;
    int input;
    cout<<"Enter the array element :\n";
    for (int i = 0; i<size; i++){
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i<v.size()-1; i++){
        if (v[i] == v[i+1]){
            if (vec.empty() || vec.back() != v[i]){
                vec.push_back(v[i]);
            }
        }
    }
    cout<<"\nThe Duplicate number is :-\n";
    for (auto d:vec){
        cout<<d<<" ";
    }
}