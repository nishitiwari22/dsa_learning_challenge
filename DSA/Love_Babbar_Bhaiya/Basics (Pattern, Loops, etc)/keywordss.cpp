#include<iostream>
using namespace std;

    void print(int n){
        //base case
        if(n==0){
            return ;
        }
        //Recursive relation
        print(n-1);
        cout<<n<<endl;
    }

    #define PI 31.4 // This is a macro. Super safe better than using double. As double data type can be changed. 

    // double d = 3.14;

   
    
    //Don't use global var it is not a good practice. Any fucntion can update the value of global variable.

    // Inline functions:

    inline int getMax(int& a , int& b){
return  (a > b) ? a : b;
    }


    // Default arguments: Imp: It's starts from the rightmost parameter. 

    

    int main(){
    //     int n;
    //     cin>> n;
    //     cout<<endl;
    //     print(n);

    // double r = 5;
    // double area = PI * r * r;
    // cout<< "Area is "<< area << endl;

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);
    cout<<ans <<endl;

    a = a+ 3;
    b = b+ 1;

    ans = getMax(a,b);
    cout<<ans<<endl;
    
    return 0;
}