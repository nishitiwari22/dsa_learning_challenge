//****Factorial Wala Recurssion*****

/* #include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}
int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;
    return 0;
}
*/

//***Power wala Recurssion Solution***

/*
#include <iostream>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recurssive relation
    return 2 * power(n - 1);
}
int main()
{
    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;
    return 0;
}
*/

//****Homework: Sperating Digits and mapping them with the name.

/*
#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{

    // base case
    if (n == 0)
        return;

    // Processing
    int digit = n % 10;
    n = n / 10;

    // recurssive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{

    string arr[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl;
    sayDigit(n, arr);
    cout << endl;
    return 0;
}
*/

// Climb Stairs Question CodeSTUDIO
/*#include <iostream>
using namespace std;
int distantwaystoClimbStairs(long long nStairs)
{
    // base case
    if (nStairs < 0)
        ;
    return 0;

    if (nStairs == 0)
        ;
    return 1;
}
int main()
{
    // R.C
    int ans = distantwaystoClimbStairs(nStairs-1) + distantwaystoClimbStairs(nStairs - 2);
    return ans;

}*/

// Source and Destination (Walking Example explained through Recurssion)


/*
#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{

    cout << "source " << src << "destination " << dest << endl;

    // base case
    if (src == dest)
        cout << " pauch gaya " << endl;
    return;

    // Processing -ek step aage badh jao
    src++;

    // recurssive call
    reachHome(src, dest);
}

int main()
{

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    return 0;
}
*/


// Fibnoacci using for loop


/*
#include<iostream>
using namespace std;

int fib(int n){
    if(n == 1 || n == 2) return n-1;
    int a = 0, b = 1;
    int ans;
    for(int i=3;i<=n; i++){
        ans = a+b;
        a = b;
        b = ans;
    }
    return ans;
}

int main(void)
{
    int n;
    cin>> n;
    cout<<"nth Fibonacci number is "<<fib(n)<<endl;
    return 0;
}
*/

// Fibnoacci using for loop also printing the numbers


/*
#include<iostream>
// #include<conio.h>
using namespace std;
class A{
    int n,a,b,c;
    public:
    void fib(){
        a=0; b =1;
        cout<<"Enter number of terms";
        cin>>n;
        for(int i = 1; i<=n; i++){
            cout<<a<<endl;
            c= a+b;
            a=b;
            b=c;
        }
    }


};

int main(){
    A obj;
    obj.fib();
}
*/





//Videoo Number 3
#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i = s; i <=e; i++){
        cout<< arr[i]<< " ";
    }cout<<endl;
}
bool binarySearch(int *arr, int s, int e, int k){
    //base case

    //element not found
    if(s>e)
    return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
    return true;

    if(arr[mid] < k)
{
return binarySearch(arr, mid+1, e, k);;
    }else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[11] = {2,4,6,10,12,14,16,18,202};
    int size = 11;
    int key = 202;

    cout<< "Present or not "<<binarySearch(arr, 0, size-1, key) <<endl;
}
