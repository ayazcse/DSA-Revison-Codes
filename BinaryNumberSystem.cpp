//Binary to Decimal
#include <iostream>
using namespace std;

void bintoDec(  long long n){
    int pow=1;
    int decNum=0;
    while(n>0){
        int lastDigit=n%10;
        decNum+=lastDigit*pow;
        pow*=2;
        n=n/10;
    }
    cout<<decNum<<endl;
}
int main(){
  bintoDec(10100011111001);
}
