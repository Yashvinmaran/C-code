# include <iostream>
# include <stack>

using namespace std;

stack<int>s;
s.push(21);
s.push(31);
s.push(41);
s.push(51);

while(!s.empty()){
    cout<<s.top()<<"\t";
    s.pop();
}