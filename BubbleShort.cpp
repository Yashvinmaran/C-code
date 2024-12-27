//Bubble short code
/*# include <iostream>
using namespace std;
int main(){
      int size;
      cin>>size;
      int arr[size];
      for (int i = 0;i<size; i++){
            cin>>arr[i];
      }
       bool swep;
      for(int i = 0; i<size; i++){
              swep = false;
            for (int j = 0; j < size-1-i; j++){
                  if (arr[j]>arr[j+1]){
                        int temp;
                        temp = arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                         swep = true;
                  }
            }
               if(!swep){
               break;
                   }
      }
      for (int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}*/

# include <iostream>
using namespace std;
int main(){
      int size;
      cout<<"enter the size of array :";
      cin>>size;
      int arr[size];
      bool flag = true;
      for (int i = 0; i<size; i++){
            cin>>arr[i];
      }
      for (int i = 0; i<size; i++){
            flag = true;
            for (int j = 1; j<size-i; j++){
                  if(arr[j]<arr[j-1]){
                        int temp;
                        temp = arr[j];
                        arr[j] = arr[j-1];
                        arr[j-1] = temp;
                        flag = false;
                  }
            }
            if(flag){
                  break;
            }
      }
      for (int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}
