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
