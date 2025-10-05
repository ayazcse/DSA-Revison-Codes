//InputOutputArray
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

//Find Largest in Array
int main(){
int n;
cout<<"Enter Size of Array: ";
cin>>n;
int arr[n];
cout<<"Fill "<<n<<" values :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"Maximum :"<<max<<endl;

}


//Linear Search
int LinearSerach(int *arr, int n , int key){
  for(int i=0;i<n;i++){
        if(arr[i]==key){
                return i;
        }
  }
  return -1;
}
int main(){
int arr[]= {2,3,4,5,6,7};
int n = sizeof(arr)/sizeof(int);
cout<<LinearSerach(arr,n,6);
}



//Reverse Array 2 pointer without extra space
void ReverseArray(int *arr, int n){
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main(){
        int arr[]= { 1, 2, 3, 4, 5 };
        int n= sizeof(arr)/sizeof(int);
        int start=0,end=n-1;
        while(start<end){
                int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end --;
        }
        ReverseArray(arr,n);
}
