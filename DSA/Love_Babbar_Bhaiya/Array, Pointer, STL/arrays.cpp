// Introduction

// What is Array ?
//  Why array ?

// Declaring Arrays

//  Indexes in Array

// Accessing in array

// Initialisation in Arrays

//Homework

// int array [10000] ={1};

//  Implementation

// #include<iostream> *********
// using namespace std; ************

//HOLD
// void printArray(int arr[], int size){
//     cout<<"Printing an array "<<endl;
// for( int i = 0; i < size; i++){
//     cout<< arr[i] <<endl; //making all other locations zero 
// }
//  cout<<"Printing DONE "<<endl;

// }

// int main(){ ***************
    //declare
//     int number[15];

// cout<< number[0] <<endl;
// //accessing an array

// cout<<"Value at 7 index" <<number[7] <<endl;

// // cout<<"Value at 20 index" <<number[20] <<endl;

// cout<< endl<<"Everything is FINE" <<endl <<endl;

// //intailizing an array
// int second[7] = {1,2,3,4,5};

// cout<<"Value at 2 index " <<second[2] <<endl;

// int  third[15] ={2,7};
// printArray(third, 15); //here func is used

// int n = 15; 

// int thirdSize= sizeof(third)/ sizeof(int); //isse humko array ka size milega jo ki hai 15 jabki humne  sirf 2 elements he daale hai
// cout<<"Size of third "<<thirdSize <<endl;
// return 0;

// cout<<"Printing an array "<<endl;
// for( int i = 0; i < n; i++){
//     cout<< third[i]  <<endl; //making all other locations zero 
// }

// int fourth[10] ={0};
// int n= 10;
// cout<<"Printing an array "<<endl;
// for (int i = 0; i<n; i++){
//     cout<<fourth[i]<<endl; //Making all locations zero!
// }

//intailzing all locations with 1 is not possibel with below line
// int fifth[10] ={1};
// int n= 10;
// cout<<"Printing an array "<<endl;
// for (int i = 0; i<n; i++){
//     cout<<fifth[i]<<endl; //First location will be 1 rest all 0
// }

// **** Arrays with Functions *****


// int fifth[10] ={1};
// int n= 10;
// printArray(fifth,10);


// int fifthSize= sizeof(fifth)/ sizeof(int);
// cout<<"Size of fifth "<<fifthSize <<endl;




// ******Different types of Arrays*******

// char ch[5] = {'a', 'b', 'c', 'd'};
// cout <<ch [3] <<endl;

// cout<<"Everything is fine "<<endl;
// for(int i =0; i<5; i++){
// cout<< ch[i]<<endl;
// }
// cout<<"Printing DONE"<<endl;
// double firstdouble[5];
// float firstfloat[6];
// bool firstbool[9];
// printArray(ch); //this will give an error because the func array is only meant for integer array



//  ********Maximum/Minimum in an Array********


// int getMax(int num[], int n){

// int max = INT_MIN;

// for(int i=0; i<n; i++){
    // if(num[i]> max){
    //     max = num[i];

    // }
     //same as the below line

//     maxi = max(maxi[i], num[i]);
// }
//returing maximum value
// return maxi;
// }

// int getMin(int num[], int n){

// int min = __INT_MAX__;

// for(int i=0; i<n; i++){

     //same as the below line
//     if(num[i]> min){
//         min = num[i];

//     }
// }

//returing min value
// return min;

// }
// int main(){ ************


// int size;
// cin>>size;
// int num [100];
// for(int i = 0; i<size; i++){
// cin>>num[i];
// }

// cout<<"Maziumum element is n array" <<getMax(num,size) <<endl;
// cout<<"Maziumum element is n array" <<getMin (num,size)<<endl;


// This Max Min problem is giving this error
// 'int getMin(int*, int)':
// main.cpp:6:16: error: 'INT_MAX' was not declared in this scope
//      int mini = INT_MAX;
//                 ^
// main.cpp: In function 'int getMax(int*, int)':
// main.cpp:23:16: error: 'INT_MIN' was not declared in this scope
//      int maxi = INT_MIN;
             



// Scopes in Array


// #include<iostream>
// using namespace std;

// void update(int arr[], int n){

//      arr[0]=120;

// cout<< "Inside the main function"<< endl;
// for(int i= 0; i<3; i++){
//     cout<<arr[i]<<endl;
// }
// cout<<"Going back to the main function "<<endl;
// }


// int main(){

//     int arr[3]={1,2,3};

// update(arr, 3);

// cout<< "Outside the main function"<< endl;
// for(int i= 0; i<3; i++){
//     cout<<arr[i]<<endl;
// }
// return 0;
// }

//Why arr[0] changed in main function ?
// Jab arrays mai func ke sath khelo toh yeh yaad rakhna ki actual value update ho rhi hogi kyuki arr base address ka bhi kaam karta h


//  Homework


// #include<iostream>
// using namespace std;
// int sum(int arr[], int n)
// {
//      int sum = 0;//intialize
// for(int i =0; i<n; i++){
//     sum += arr[i];
//     cout<<"Everything is fine " <<endl;

// }
// return sum;
// }
// int main(){

// int arr[] = {12,3,0, 5,2};
// int n = sizeof(arr)/sizeof(arr[0]);
// printf("sum of given array is %d", sum(arr,n));

//     return 0;

// }


// Linear Search




// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i =0; i<size; i++){
//         if (arr[i]==key){
//         return 1;
//         }
//     }
//     return 0;
// }

// int main(){
// int arr[] = {1,2,4,5,6,7,8,9,3};
//     cout<<"Enter the element to search for "<<endl;
//     int key;
//     cin>> key;


//     bool found = search (arr, 10, key);

//     if( found ){
//         cout<<"The key is matched " <<endl;
//     }
//     else{
//         cout<<"The key is not matched "<<endl;
//     }

//     return 0;
// }


// Reverse an Array

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int n){

// int start = 0;
// int end= n-1;

//     while(start<=end){
//         swap (arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n){
// for(int i = 0; i<n; i++){
//     cout<< arr[i] << " " <<endl;
// }
// cout<<endl;
// }
// int main(){

// int arr[6]={1,2,3,4,5,6};
// int brr[4]={3,4,5,6};

// reverse(arr, 6);
// reverse(brr, 4);

// printArray(arr, 6);
// printArray(brr, 4);

//     return 0;
// }


// Some Question for next Video

// FIND UNIQUE ELEMENT IN AN is_arrayFIND DUPLICATE ELEMENT 
// ARRAY INTERSEACTION 
// TRIPLET SUM
// PAR SUM

// SORT 0'S AND 1'S


// Getting length of array:

// #include<iostream>
// using namespace std;

// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i]!='\0'; i++){
//     count++;

//     }
//     return count++;
// }

// int main(){

//     char name[20];
//     cout<<"Daalo naam";
//     cin>>name;

//     cout<< "Lenggth: " <<getLength(name)<<endl;
//     return 0;
// }


// How to intalize entire array with any value
// Answer: fill method

#include<iostream>
using namespace std;

int main(){

    int array [100];

// To intalize the array with value '1'
fill_n(array, 100, 1);

//To check the array input (Only 5 tak print)
for(int i=0; i<=5; i++){
    cout<<array[i]<<endl;
}
    
    return 0;
}