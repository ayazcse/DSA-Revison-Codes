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



//Insertion  Sort
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];      // jis element ko insert karna hai
        int j = i - 1;
        // peeche wale elements se compare karo
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // bada element aage badhao
            j--;
        }
        arr[j + 1] = key;  // sahi jagah pe insert karo
    }
}

int main() {
    int arr[] = {8, 3, 5, 2, 7};
    int n = 5;
    insertionSort(arr, n);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}




//Count Sort
#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    // 🔹 Step 1: Find the maximum element (taaki pata chale count array kitna bada banana hai)
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // 🔹 Step 2: Create a count array (sab elements ke liye 0 se max tak jagah)
    int count[max + 1] = {0};

    // 🔹 Step 3: Count each element (har number kitni baar aaya)
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;   // jis number ka index hai, uski ginti badha do
    }

    // 🔹 Step 4: Convert count array to cumulative count
    // ye batata hai ke element sorted array me kis index tak jayega
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // 🔹 Step 5: Create an output array jisme sorted values aayengi
    int output[n];

    // 🔹 Step 6: Original array ke end se shuru karo (right to left)
    // taaki sort stable rahe (same numbers ka order na toote)
    for (int i = n - 1; i >= 0; i--) {
        // count[arr[i]] batata hai ki element kahan place hoga
        // -1 isliye kyunki index 0 se start hota hai
        output[count[arr[i]] - 1] = arr[i];

        // us element ka count ek kam kar do (kyunki ek place fill ho gaya)
        count[arr[i]]--;
    }

    // 🔹 Step 7: Sorted values wapas original array me copy kar do
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;

    countingSort(arr, n); // function call

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


//I n Built Sort
#include <iostream>
#include <algorithm> // sort() yahan hota hai
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // total elements

    // 🔹 In-built sort function
    sort(arr, arr + n);

    cout << "Sorted Array (Ascending): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
