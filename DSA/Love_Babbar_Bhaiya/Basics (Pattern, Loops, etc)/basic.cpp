#include<iostream>
using namespace std;
int main() {
    //int n;
    // cin>>n;
    // cout<<"value of n is:"<<n <<endl;

    //if a is positive
    // if(n>0){
    //     cout<<"N is positive:" <<n <<endl;
    // }
    // else{
    //         cout<<"N is negative:" <<n <<endl;
//}

            // int a, b;
            // cin >> a >> b;

            // cout<< "Value of a and b is" <<a <<" " <<b <<endl;

            //cin does not read space, tab and enter value so to resolve this we have cin.get()

// int a;
//             a = cin.get();

//             cout<<"Value of a is: "<< a << endl;

//**** Program to tell which number is greater or smaller

// int a, b;

// cout <<"Value of a is: " <<endl;
// cin >> a;


// cout <<"Value of b is: " <<endl;
// cin >> b;

// if(a>b){
//     cout << "A is greater: "<<a <<endl;
// }
//     if(b>a){
//     cout << "B is greater: "<<b <<endl;
// }

//**** loop

// int a;
// cout<<"Enter the value of a:"<<endl;
// cin>>a;

// if(a>0){
//     cout<<"A is positive: "<<endl;
// }
//     else
//     if(a<0){
//         cout<<"A is negative: "<<endl;
//     }
//     else
//     {
//         cout<<"A is zero: "<<endl;
//     }

//*****If-else if loop****

// int a;
// cout<<"Enter the value of a:"<<endl;
// cin>>a;
// if(a>0){
//     cout<<"A is positive: "<<endl;
// }
// else if(a<0){
//     cout<<"A is negative: "<<endl;
// }
// else {
//     cout<<"A is zero: "<<endl;
// }


//***Question 1***
// int a = 9;
// if(a==9){
//     cout<<"Niney" <<endl;
// }
// if(a>0){
//     cout<<"POSITIVE"<<endl;
// }
// else{
//     cout<<"NEGATIVE"<<endl;
// }

//Output of question one was Niney, Positive

// //***Question 2***
//  int a = 2;
//  int b = a+1;
//  if((a=3)==b){
//  }
// if(a>0){
//   cout<<"a"<<endl;
//  }
//  else{
//    cout<<"a+1"<<endl;
// }

//Output of question 2 was a



//***Question 3***
//  int a = 24;
//  if(a>20){
//       cout<<"Love"<<endl;
//  }
// else if(a==24){
//   cout<<"Lovely"<<endl;
//  }
//  else{
//    cout<<"Babbar"<<endl;
// }
// cout<<a;

//Output of question 3 was Love, a 

//Homework

// char ch;
// cin>> ch;

//  if(ch>='a' && ch<='z'){
//     cout<<"This is Lowercase"<<endl;
//   }
//   if(ch>='A' && ch<='Z'){
// cout<<"This is Uppercase"<<endl;
//  }
//  if(ch>=0 && ch<=9){
// cout<<"Numeric"<<endl;
//  }
//  return 0;

//***While loop****

// int n;
// cin>> n;
// int i= 1;

// while(i<=n){
// cout<<i<<" ";
// i=i+1;
// }

// int n;
// cin>>n;

// int sum = 0;
// int i = 1;

// while(i<=n){
//   sum = sum + i;
//   i = i + 1;
// }
// cout<<"SUM "<< sum <<endl; 


// Homework

// Print sum to n even numbers

int n;
cin>>n;
int sum = 0;
int i = 2;

while(i<=n){
  if(i % 2 ==0)
  sum = sum + i;
  i = i + 1;
}
cout<< "Sum from " << 1 << "to " << n << " " << sum << endl;



// int n;
// cin>>n;

// int sum = 0;
// int i = 1;

// while(i<=n){
//   sum = sum + i;
//   i = i + 2;
// }
// cout<<"SUM of even numbers "<< sum <<endl; 
// }

//Homework 2 Fahrenheit to celsius table

// int n;
// cin>>n;

//Homework 3 Identify Prime or not
    
// int n;
// cin>>n;

// int i = 2;

// while(i<n){
// //divide hogaya not prime
// if(n%i==0){
//  cout<<"Not prime for "<< i <<endl;
// }
// else{
//   cout<<"Prime for "<<i<<endl;
// }
// i = i+1;


// }

// Check this again.

// #include <iostream>
// using namespace std;

// int main() {
//     char a;
//     cin>>a;
//     // 'A' is 65
//     // 'a' is 97
//     // '0'is 48
//     if(a >= 'A' && a <='Z'){
//      std::cout<<"This is upper case" <<endl;
//     }
//     else if(a >= 'a' && a<='z'){
//      std::cout<<"This is lower case" <<endl;
//     }
//     else if (a >= '0' && a <= '9'){
//       std::cout<<"This is a digit" <<endl;
//     }

//     return 0;
// }
}