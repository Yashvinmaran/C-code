#include <iostream>
using namespace std;
int Sorting(int arr[],int low,int high){
      int pivot=arr[low];
      int p=low+1;
      int q=high;
      int tmp;
      do{
            while(arr[p]<pivot){
            p++;
            }
            while(arr[q]>pivot){
            q--;
      }
      if(p<q){
            tmp=arr[p];
            arr[p]=arr[q];
            arr[q]=tmp;
      }
}while(p<q);
      tmp=arr[low];
      arr[low]=arr[q];
      arr[q]=tmp;
      return q;
}
void QuickSort(int  arr[],int low,int high){
      if(low<high){
            int pivot;
            pivot=Sorting(arr,low,high);
            QuickSort(arr,0,pivot-1);
            QuickSort(arr,pivot+1,high);
            }
      }
void PrintArray(int arr[],int s){
      for(int i=0;i<s;i++){
      cout<<arr[i]<<" ";
      }
}
int main(){
      int size;
      cout<<"Enter the size of array :";
      cin>>size;
      int arr[size];
      for (int i = 0; i<size; i++){
      cin>>arr[i];
      }
      QuickSort(arr,0,size-1);
      cout<<"After quick sort\n";
      PrintArray(arr,size);
}



/* # include <iostream>
using namespace std;
void sorting(int arr[], int start, int end){
      int temp;
      int s = start;
      int e = end-1;
      int pivot = arr[s];
      do{
            while(arr[s]<pivot){
                 s++; 
            }
            while(arr[e]>pivot){
                  e--;
            }
            if(s<e){
                  temp = arr[s];
                 arr[s] = arr[e];
                 arr[e] = temp;
            }
      }while(s<e);
      return e;
}
void QuickSort(int arr[], int start, int end){
      if(start<end){
            int pivot;
            pivot=sorting(arr,start,end);
            QuickSort(arr,0,pivot-1);
            QuickSort(arr,pivot+1,end);
            }
}
void PrintArray(int arr[], int size){
      for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
      }
}
int main(){
      int size;
      cout<<"Enter the size of array :";
      cin>>size;
      int arr[size];
      for (int i = 0; i<size; i++){
      cin>>arr[i];
      }
      QuickSort(arr,0,size);
      cout<<"After quick sort\n";
      PrintArray(arr,size);
#include <iostream>
using namespace std;

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n - 1);
    PrintArray(arr, n);
    return 0;
}*/
