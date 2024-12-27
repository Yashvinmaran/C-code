# include <iostream>
# include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>up;
    
    up.insert({"Yashvin",101});
    up.insert({"Deepanshu",105});
    up.insert({"Unit",103});
    up.insert({"Piyush",102});
    up.insert({"Maran",104});
    
    for (auto p:up){
        cout<<p.first<<"\t"<<p.second<<endl;
    }
    
    auto p = up.find("Unit");
    if(p!=up.end()){
        cout<<p->first<<"\t"<<p->second<<"\n";
    }else{
        cout<<"Not found";
    }
}