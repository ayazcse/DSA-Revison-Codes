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




//is Prime or Not
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<isPrime(3);
}



//Binomial Coefficient   BC= n!/r!*(n-r)!
int fact(int n){
    int f=1;
for(int i=1;i<=n;i++){
   f*=i;
}
return f;
}

int bc(int n,int r){
    int val1= fact(n);
int val2= fact(r);
int val3= fact(n-r);
int result= val1/(val2*val3);
return result;
}

int main(){
cout<<bc(5,5);
}


//Prime no upto n
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
    if(n%i==0){
     return false;   
    }
    }
    return true;
}
void allPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}
int main(){
    allPrime(20);
    return 0;
}




//Sum of Digits
int sumOfNum(int n){
    int sum=0;
    while(n>0){
       int reverse= n%10;
       sum+= reverse;
       n=n/10;
    }
    return sum;
}
int main(){
    int number;
    cin>>number;
   cout<< sumOfNum(number);
}



//example
int paramters(int a, int b){
    int sum= (a*a)+(b*b)+(2*a*b);
    return sum;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<paramters(a,b);
}



//example 2
char interchange(char ch){
    if(ch=='Z') return 'A';
    if(ch=='z') return 'a';
    return ch+1;
}
int main(){
   char ch;
   cin>>ch;
   cout<<interchange(ch);
}
