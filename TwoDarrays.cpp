//Input output
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
int n,m;
cout<<"Enter no of Rows: ";
cin>>n;
cout<<"Enter no of Columns: ";
cin>>m;
int arr[100][100];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    }


//SPIRAL MATRIX
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Rows aur Columns batao babu: ";
    cin >> n >> m;

    int arr[n][m];
    cout << "Matrix ke elements daalo:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    cout << "\nSpiral Order: ";

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return 0;
}



//Diagonal Sum

#include <iostream>
using namespace std;
void DiagonalSum(int mat[][4], int n){
        int sum=0;
        for(int i=0;i<n;i++){
         sum+=mat[i][i];
         if(i!=n-i-1){
                 sum+=mat[i][n-i-1];
        }
        }
        cout<<"Sum :"<<sum<<endl;
}
int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    DiagonalSum(mat, 4);
    return 0;
}


//Search in Sored Matrix
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void SearchKey(int mat[][4], int n , int m,int key){
    int i=0;int j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"Found at cell ("<<i<<" , "<<j<<")";
            return;
        }
        else if(mat[i][j]>key){
            j--;
            }
        else{
            i++;
            }
    }
    cout<<"Key not found."<<endl;
}

int main (){
    int mat[4][4]= {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    SearchKey(mat,4,4,14);
    return 0;
}
