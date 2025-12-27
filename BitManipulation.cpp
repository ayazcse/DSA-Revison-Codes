//Check ODD or Even 
//4-> 100    0-Even     5->101  1-Odd     100 & 001 ==0 (Even)  but any    n & 0   == Always 0
#include <iostream>
using namespace std;
void OddorEven(int n){
        if((n&1)==0){
                cout<<"Even";
        }
        else{
                cout<<"Odd";
        }
}

int main()
{
    int n;
    cin>>n;
    OddorEven(n);
    
    return 0;
}
