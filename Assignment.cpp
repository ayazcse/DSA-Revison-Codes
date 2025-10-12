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
