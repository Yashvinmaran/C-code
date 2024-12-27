//Merge sort :-
/*# include <iostream>
using namespace std;
void Merge(int *arr, int low, int mid, int high){
    int *newarr = new int [high-low+1];
    int i = low;
    int j = mid+1;
    int k = 0;
    while(i <= mid && j<= high){
        if(arr[i]<arr[j]){
            newarr[k++] = arr[i++];
        }else{
            newarr[k++] = arr[j++];
        }
    }
    while(i <= mid){
        newarr[k++] = arr[i++];
    }
    while(j <= high){
        newarr[k++] = arr[j++];
    }
    for (int m = low; m<=high; m++){
        arr[m] = newarr[m-low];
    }
    delete[]  newarr;
}
void divide(int *arr, int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        divide(arr,low,mid);
        divide(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}
void print(int *arr, int size){
    for (int i = 0; i<size; i++){
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
    divide(arr,0,size-1);
    cout<<"After sorting the array :-"<<endl;
    print(arr,size);
}*/

//Quick sort :-
/*# include <iostream>
using namespace std;
int Partition(int *arr,int low, int high){
    int pivot = arr[low];
    int p = low+1;
    int q = high;
    int temp;

    while(p<=q){
        while(arr[p]<=pivot && p <= high){
            p++;
        }
        while(arr[q]>pivot && q>low){
            q--;
        }
        if(p<q){
        temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
        }
    }
        temp = arr[q];
        arr[q] = arr[low];
        arr[low] = temp;

        return q;
}
void quickSort(int *arr, int low, int high){
    if(low<high){
    int pivot = Partition(arr,low, high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
    }
}
void print(int *arr, int size){
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for (int i = 0; i<size ; i++){
        cin>>arr[i];
    }
    quickSort(arr,0,size-1);
    cout<<"After quick sort :-"<<endl;
    print(arr,size);
}*/

//Bubble sort :-
/*# include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }
    bool flag = true;
    for (int i = 0; i<size; i++){
        flag = true;
        for (int j = 1; j<size-i; j++){
            if(arr[j-1]>arr[j]){
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
}*/

//Selection sort :-
/*# include <iostream>
using namespace std;

int main(){
    int size,small;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }
    for (int i = 0; i<size; i++){
        small = i;
        for (int j = i+1; j<size; j++){
            if(arr[small]>arr[j]){
                small= j;
            }
        }
        if(i != small){
            int temp = arr[i];
                arr[i] = arr[small];
                arr[small] = temp;
        }
    }
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}*/

//Insertion sort :-
/*# include <iostream>
using namespace std;
int main(){
    int size,sorted;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }
    for (int i = 1; i<size; i++){
        sorted = i;
        while(arr[sorted]<arr[sorted-1] && sorted>0){
            int temp = arr[sorted];
            arr[sorted] = arr[sorted-1];
            arr[sorted-1] = temp;
            sorted --;
        }
    }
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}*/

#include <iostream>
using namespace std;

void Merge(int *arr, int low, int mid, int high) {
    int *newarr = new int[high - low + 1];
    int i = low, j = mid + 1, k = 0;  // j = mid + 1 for the second half of the array

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            newarr[k++] = arr[i++];
        } else {
            newarr[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        newarr[k++] = arr[i++];
    }
    while (j <= high) {
        newarr[k++] = arr[j++];
    }
    for (int m = low; m <= high; m++) {  // Copy back to the original array
        arr[m] = newarr[m-low];
    }

    delete[] newarr;  // Free the dynamically allocated array
}

void divide(int *arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

void print(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    divide(arr, 0, size - 1);
    cout << "After sorting, the array is: " << endl;
    print(arr, size);
    return 0;
}
