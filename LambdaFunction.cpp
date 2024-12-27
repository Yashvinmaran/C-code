# include <iostream>
# include <vector>
# include <cstring>
using namespace std;
int main(){
    cout<<[](int a, int b){
        if(a>b) return a;
        else return b;
    }(300,40);
}