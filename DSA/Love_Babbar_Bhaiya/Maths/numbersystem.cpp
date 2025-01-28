/*
#include<iostream>
#include<math.h>
using namespace std;
// int n;
// cin>>n;

// int ans = 0;
// int i = 0;
// while(n!= 0){
//   int  bit  =  n & i ;
//   ans = (bit*  pow (10, i)) + ans;

// n = n >> 1;
// i++;
// }



// cout<< "Answer is: " << ans <<endl;


//******* Converting Decimal to Binary 
// int n;
// cin>>n;
// void DecimaltoBinary(int n){
//     int binaryNumber[100], num= n;
//     int i = 0;
// while(n > 0){
// binaryNumber[i] = n %2;
// n = n/2;
// i++;
// }

// cout<< "Binary form of " << num <<endl;
// for(int j = i - 1; j=0; j--)
// cout<< binaryNumber [j];
// cout<<endl;
// }
int main()
{

    int n;
    cin>>n;
int i =0;
int ans = 0;
while(n!=0){
    int digit = n % 10;
    // int digit = n%1;
    if (digit==1){
    ans = ans + pow(2, i);
}
n = n/10;
i++;
}
 cout<< ans  <<endl;


// DecimaltoBinary(10);
// return 0;
}
*/



/*
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
    return false;
    
    for(int i = 2; i<n; i++)
{
    if(n%i==0)
    {
        return false;
    }
}
return true;

}

int main() {
    // Write C++ code here
    
    int n;
    cin>> n;
    
    if(isPrime(n)){
    std::cout << "It is a Prime Number" <<endl;
    }
    else {
    std::cout << "It is not a Prime Number" <<endl;
    }

    return 0;
}
*/


//  ****** Seive of Erathosethnes******
/*
#include <iostream>
#include <vector>
using namespace std;

//using Sieve
void sieve(bool prime[]){

//Setting TRUE for every number

for(int i=2; i<=1000000; i++)
{
    prime[i]=1;
}

for(int i = 2; i<=1000000; i++)
{
    if(prime[i])
    {
        //iske saare multiple mark kardo - non prime
        for(int j = 2*i; j<=100000; j+=1){
            prime[j] = 0;
        }
    }
}
prime[0] = prime[1] = 0;


int main(){
    bool prime[1000001];
    seive(prime);

    int n;
    cin>>n;
    while(n!=-1){
        if(prime[n]){
            cout<<"It is a Prime Number"
        }
        else{
            cout<<"It is not a Prime Number"

        }
        cin>>n;
    }

return 0;
}
*/





// Finding GCD!



/*
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a == 0)
    return b;


if(b==0)
return a;

while(a != b){
    if(a>b){
        a = a-b;
    }
    else {
        b = b - a;
    }
}
return a;
}

int main(){
    int a, b;
    cout<< "Enter the Values of a and b" <<endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout<< "The GCD of " << a << " & " << b <<" is: " <<ans <<endl;

    return 0;
}
/*




