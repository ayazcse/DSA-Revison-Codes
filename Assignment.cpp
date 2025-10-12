// {1,1,2,3,4} = true {2,3,3,2,3,3}=true {1,2,3}=false
#include <iostream>
#include <climits>
using namespace std;

bool isTwice( int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
        if(arr[i]==arr[j]){
            return true;
        }
            
        }
    }
    return false;
}
int main(){
    int arr[]= {0,1,2,3};
    int n=4;
   cout<< isTwice(arr,n);
}




//Sorted Rotated ....Target given
#include <iostream>
#include <climits>
using namespace std;

int SearchRotated(int *arr, int n, int target){
    int start=0, end=n-1;
    
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
    
    
    if(arr[start]<=arr[mid]){
        if(target>=arr[start] && target<=arr[mid]){
            end =mid-1;
        }
        else {
            start=mid+1;
        }
    }
    else{
        if(arr[end]>=target && arr[mid]<=target){
            start= mid+1;
        }
        else{
            end= mid-1;
        }
    }
        
    }
    return -1;
}
int main(){
    int arr[]= {6,7,8,9,0,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int target = 6;

    int index = SearchRotated(arr,n,target);
    if(index != -1)
        cout << "Target found at index: " << index;
    else
        cout << "Target not found";
}
