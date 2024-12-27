# include <iostream>
# include <vector>
# include <string>
# include <iterator>
# include <wchar.h>
using namespace std;

int main(){
      pair<int,string>p;
      int i;
      string s;
      cout<<"Enter the pair first data :";
      cin>>i;
      cout<<"Enter the pair second data :";
      cin>>s;
      p = make_pair(i,s);
      cout<<p.first<<" "<<p.second<<endl;

      int t;
      vector<pair<int,string> >v;
      cout<<"Enter the number of elements in the vector :";
      cin>>t;
      for (int j=0;j<t;j++){
            cout<<"Enter the element "<<j+1<<" :";
            cin>>i;
            cin>>s;
            v.push_back({i,s});
      }
      cout<<"Vector elements are :"<<endl;
      for (auto p:v){
            cout<<p.first<<" "<<p.second<<endl;
      }
}