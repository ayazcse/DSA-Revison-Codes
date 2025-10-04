
//find sum
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




//Product of two no code
int product(int a, int b){
    int product= a*b;
return product;
}
int main(){
    int p=product(3,4);
cout<<p;}




//ODD OR EVEN
int oddEVEN(int a){
   if(a%2==0){
       cout<<"Even.\n";
   }
   else{
   cout<<"odd.\n";}
 return a;
}

int main(){
    int p=oddEVEN(4);
    
}


//Factorial using function
int fact(int a){
    int factorial =1;
   for(int i=1;i<=a;i++){
       factorial*=i;
   }
 return factorial;
}

int main(){
   cout<< fact(5);
}
