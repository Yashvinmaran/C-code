/*# include <iostream>
using namespace std;
int main(){
      int size,sorted;
      cin>>size;
      int arr[size];
      for (int i = 0; i<size; i++){
            cin >> arr[i];
      }

      for (int i = 1;  i<size; i++){
            sorted = i;
            while (sorted > 0 && arr[sorted]<arr[sorted-1]){
                  int temp;
                  temp = arr[sorted];
                  arr[sorted] = arr[sorted-1];
                  arr[sorted-1] = temp;
               sorted--;   
            }
      }
      for (int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}*/ 

# include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main(){
      int size;
      cout<<"Enter the size of array :";
      cin>>size;
      int arr[size];
      for (int i = 0; i<size; i++){
            cin>>arr[i];
      }
      int sorted;
      for (int i =1; i<size; i++){
            sorted = i;
            while(sorted > 0 && arr[sorted]<arr[sorted-1]){
                  int temp;
                  temp = arr[sorted];
                  arr[sorted] = arr[sorted-1];
                  arr[sorted-1] = temp;
            sorted--;
            }
      }
      for (int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}