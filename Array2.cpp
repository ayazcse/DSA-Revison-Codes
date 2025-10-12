//Print Subarrays
void SubArrays(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" , ";
            }
             cout<<endl;
        }
    }
}
int main(){
    int arr[5]= {3,  6 ,7  , 9 ,9};
    int n=5;
    SubArrays(arr,5);
}



//Max Sum Subarray Brute Force
#include<iostream>
#include <climits>

using namespace std;
void MaxSumSubArray(int *arr, int n){
        int maxSum= INT_MIN;
        for(int start=0;start<n;start++){
                for(int end=start;end<n;end++){
                        int currSum=0;
                        for(int i=start;i<=end;i++){
                                currSum+=arr[i];
                        }
                        cout<<currSum<<", ";
                        maxSum=max(currSum,maxSum);
                }
                cout<<endl;
                
        }
        cout<<"Maximum sum "<<maxSum<<endl;;
}
int main(){
        int arr[4]= {1,2,3,4};
        int n=4;
        MaxSumSubArray(arr,4);
}



//Max Sum Subarray 
#include<iostream>
#include <climits>

using namespace std;
void MaxSumSubArray(int *arr, int n){
        int maxSum= INT_MIN;
        for(int start=0;start<n;start++){
                for(int end=start;end<n;end++){
                        int currSum=0;
                        currSum+=arr[end];
                        maxSum=max(currSum,maxSum);
                }
                
        }
        cout<<"Maximum sum "<<maxSum<<endl;;
}
int main(){
        int arr[4]= {1,2,3,4};
        int n=4;
        MaxSumSubArray(arr,4);
}


//Kadanes Algo
#include<iostream>
#include<climits>
using namespace std;
void KadanAlgoMaxSumSubArray(int *arr, int n){
        int maxSum=INT_MIN;
        int currSum=0;
        for(int i=0;i<n;i++){
                currSum+=arr[i];
                maxSum=max(currSum,maxSum);
        }
        cout<<"Maximum Subarray : "<<maxSum<<endl;
}
 int main(){
         int arr[]= {34,45,66,77};
         int n=sizeof(arr)/sizeof(int);
         KadanAlgoMaxSumSubArray(arr,4);
 }



//Buy Sell Stocks
#include <iostream>
#include <climits>
using namespace std;

void MaximumProfit(int *prices, int n) {
    int BestBuy = prices[0];   // best (lowest) price so far
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        int currProfit = prices[i] - BestBuy;   // profit if sold today
        maxProfit = max(maxProfit, currProfit); // update best profit
        BestBuy = min(BestBuy, prices[i]);      // update best buy price
    }

    cout << "Maximum Profit = " << maxProfit << endl;
}

int main() {
    int prices[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(prices) / sizeof(prices[0]);
    MaximumProfit(prices, n);
    return 0;
}
