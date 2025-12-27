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


//GET iTH BIT
//mask= 1 Left Shit 1   -if num & bitmask == 0  ans=0 , otherwise 1

#include <iostream>
using namespace std;
void GethBit(int n, int i){
    int bitmask= 1<<i;
    if((n&bitmask)==0){
            cout<<"0";
    }
    else{
            cout<<"1";
    }
}

int main()
{
    int n;
    cin>>n;
    GethBit(n,3);
    
    return 0;
}




//SetithBit
// we will use OR as 0 | 1=1 a nd 1|1 =1 

#include <iostream>
using namespace std;

int SetiThBit(int n, int i){
    int bitmask = 1 << i;
    return (n | bitmask);
}

int main()
{
    int result = SetiThBit(5, 3);
    cout << result;
    return 0;
}

