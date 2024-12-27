//selection sort :- -----====+++++/////++++++////+++===---


/*#include<iostream>
using namespace std;
int main(){
int arr[]={2,1,7,9,5};
int chotu;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
cout<<arr[i]<<"\t";
}
cout<<"\n";
for(int i=0;i<n;i++)
{
chotu=i;
for(int j=i+1;j<n;j++)
{
if(arr[chotu]>arr[j])
{
chotu=j;
}
} 
if(chotu!=i)
{
int tmp;
tmp=arr[chotu];
arr[chotu]=arr[i];
arr[i]=tmp;
}
}
cout<<"\n after selection sort\n";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
}*/


//SELECTION SORT :----------------//////////------------++++======+++++------------////////----
/*# include <iostream>
using namespace std;
int main(){
      int size, small;
      cin>>size;
      int arr[size];
      for (int i = 0; i<size; i++){
            cin>>arr[i];
      }
      for (int i = 0; i<size; i++){
            small = i;
            for (int j = 1+i; j<size; j++){
                  if(arr[small]>arr[j]){
                        small = j;
                  }
            }
            if(small != i){
                  int temp;
                  temp = arr[small];
                  arr[small] = arr[i];
                  arr[i] = temp;
            }
      }
      for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}*/


# include <iostream>
using namespace std;
int main(){
      int size,small;
      cout<<"Enter the size of array :";
      cin>>size;
      int arr[size];
      for(int i = 0; i<size; i++){
            cin>>arr[i];
      }

      for (int i = 0; i<size; i++){
            small = i;
            for (int j = i+1; j<size; j++){
                  if(arr[small] > arr[j]){
                        small = j;
                  }
            }
            if(small != i){
                  int temp;
                  temp = arr[small];
                  arr[small] = arr[i];
                  arr[i] = temp;
            }
      }
      for (int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}