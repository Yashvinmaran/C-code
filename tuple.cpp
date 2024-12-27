/*# include <iostream>
# include <tuple>
using namespace std;

int main(){
    tuple<int, string, int> t {110,"Yashvin",19};
    cout<<get<0>(t)<<endl;
    cout<<get<1>(t)<<endl;
    cout<<get<2>(t)<<endl;
}*/



//2. Vector tuple or 2D vect[
/*# include <iostream>
# include <tuple>
# include <vector>

using namespace std;
int main(){
    vector<tuple<int,string,int>>v1;
    int n,rno, age;
    string name;
    
    cout<<"How many records\n";
    cin>>n;
    
    for (int i=1; i<=n; i++){
        cout<<"\nEnter roll no :";
        cin>>rno;
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter Age :";
        cin>>age;
        v1.push_back(make_tuple(rno,name,age));
    }
    for (int i=0; i<v1.size(); i++){
        cout<<get<0>(v1[i])<<"\t";
        cout<<get<1>(v1[i])<<"\t";
        cout<<get<2>(v1[i])<<"\n";
    }
}*/