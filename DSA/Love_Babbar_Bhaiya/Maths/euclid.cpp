#include<bits/stdtr1c++.h>
using namespace std;
int gcd(int a, int b){
    // if(b==0) return a; OR
    if(a%b==0) return b;
    return gcd (b, a%b);
}
int main(){
    cout<<gcd(12,4)<<endl;
    cout<<gcd(18,12)<<endl;
}