# include <iostream>
# include <set>

using namespace std;
int main(){
    set<string> s;
    s.insert("Apple");
    s.insert("Banana");
    s.insert("Graphes");
    s.insert("Dettol");
    s.insert("Carpenter");

    for (auto p:s){
        cout<<p<<"\n";
    }

    s.erase("Dettol");
    cout<<"After Erase data \n";
    for (auto p:s){
        cout<<p<<"\n";
    }

    auto k = s.find("Apple");
    if(k != s.end()){
        cout<<*k<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
}