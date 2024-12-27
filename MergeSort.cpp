/*#include<iostream>
using namespace std;
void conquer(int arr[],int low,int mid,int high)
{
int bk[6],k=low;
int i=low;
int j=mid+1;
while(i<=mid && j<=high)
{
if(arr[i]<arr[j])
   {
    bk[k]=arr[i];
        i++;
   }
else
{
bk[k]=arr[j];
j++;
}   
k++;
}
while(i<=mid)
{
bk[k]=arr[i];
i++;
k++;
}
while(j<=high)
{
bk[k]=arr[j];
j++;
k++;
}
for(int i=low;i<=high;i++)
{
arr[i]=bk[i];
}
}
void divide(int arr[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
divide(arr,low,mid);
divide(arr,mid+1,high);
conquer(arr,low,mid,high);
}
}
void print(int arr[],int s)
{
for(int i=0;i<s;i++)
{
cout<<arr[i]<<"\t";
}
}
int main()
{
int arr[]={5,1,2,6,7,8};
int s=sizeof(arr)/sizeof(arr[0]);
print(arr,s);
divide(arr,0,s-1);
cout<<"\nafter merge sort\n";
print(arr,s);
}*/



/*# include <iostream>
using namespace std;

void conquer(int arr[], int low, int mid, int high) {
    int* bk = new int[high - low + 1];  // Allocate bk array based on required size
    int k = 0, i = low, j = mid + 1;

    // Merging two halves
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            bk[k++] = arr[i++];
        } else {
            bk[k++] = arr[j++];
        }
    }

    // Copy remaining elements from left half, if any
    while (i <= mid) {
        bk[k++] = arr[i++];
    }

    // Copy remaining elements from right half, if any
    while (j <= high) {
        bk[k++] = arr[j++];
    }

    // Copy sorted segment back to original array
    for (int m = 0; m < k; ++m) {
        arr[low + m] = bk[m];
    }

    delete[] bk;  // Free allocated memory
}

void divide(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;  // Avoid overflow in midpoint calculation
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        conquer(arr, low, mid, high);
    }
}

void print(int arr[], int s) {
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }
}

int main() {
    int arr[] = {5, 1, 2, 6, 7, 8};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Before merge sort:\n";
    print(arr, s);

    divide(arr, 0, s - 1);

    cout << "\nAfter merge sort:\n";
    print(arr, s);

    return 0;
}*/


/*# include <iostream>
using namespace std;
void Merge(int *arr, int low, int mid, int high){
    int *newArray = new int[high];
    int i = low; 
    int j = mid+1;
    int k = low;
    while (i<=mid && j<=high){
        if(arr[i]<arr[j]){
          newArray[k] = arr[i];
          i++;
        }else {
            newArray[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i<=mid){
        newArray[k] = arr[i];
        i++;
        k++;
    }
    while(j<=high){
        newArray[k] = arr[j];
        j++;
        k++;
    }
    for (int i = 0; i<high; i++){
        arr[i] = newArray[i];
    }
}

void divide(int arr, int low, int high){
    int mid;
    if (low < high){
        mid  = (low+high)/2;
        divide(arr, low, mid);
        divide(arr, mid+1, high);
    }
}    
    
void printArray(int arr,int size){
    for (int i = 0, i<size, i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    divide(arr,0,size-1);
    cout<<"\nafter merge sort\n";
    printArray(arr,s);
}*/



#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {
    int *newArray = new int[high - low + 1];
    int i = low; 
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            newArray[k++] = arr[i++];
        } else {
            newArray[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        newArray[k++] = arr[i++];
    }

    while (j <= high) {
        newArray[k++] = arr[j++];
    }

    for (int i = low; i <= high; i++) {
        arr[i] = newArray[i - low];
    }

    delete[] newArray;
}

void divide(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}    
    
void printArray(int arr[], int size) {
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
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    divide(arr, 0, size - 1);
    cout << "After merge sort:\n";
    printArray(arr, size);

    return 0;
}
