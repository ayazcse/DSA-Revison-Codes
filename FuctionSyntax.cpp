#include<iostream>
using namespace std;
int sum(int a,int b,int c,int d){
    int sum= a+b+c+d;
    return sum;
}
int main(){
    int s= sum (1,2,2,2);
    cout<<s<<endl;
}
