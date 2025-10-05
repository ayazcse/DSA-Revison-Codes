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
