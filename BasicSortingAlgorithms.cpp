// Bubble Sort
#include <iostream>
#include <climits>
using namespace std;
void Printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
void BubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    Printarray(arr,n);
}
int main(){
    int arr[]=  {3,1,2,5,6};
        int n= 5;
        BubbleSort(arr,5);
}


//Selection Sort
// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
void SelectionSort(int *arr, int n){
    for(int i=0 ;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}
void Print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // Write C++ code here";
    int arr[]= {2,4,1,2,1,5};
    int n=6;
    SelectionSort(arr,n);
    cout<<"Sorted Array :";
    Print(arr,n);

    return 0;
}
