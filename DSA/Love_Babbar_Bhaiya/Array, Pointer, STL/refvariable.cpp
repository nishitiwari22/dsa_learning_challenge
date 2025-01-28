// #include <iostream>
// // #include<conio.h>
// using namespace std;

/*int& func(int a){
    int num = a;
    int& ans = num;
    return ans; This is a bad practice because & is used for referring and what we are referring to in same function?? It may happen that we won't be able to access that memory. That's way stay away from this
}*/

// int* fun(int n){
//     int* ptr = n;
//     return ptr;

// }

// This is a pointer. It's a bad practice here too because & is used for referring and what we are referring to in same function?? That's way stay away from this

// void update2(int &n)
// {
//     n++;
// }

// void update1(int n)
// {
//     n++;
// }

// int getSum(int *arr)
// {
//     int sum = 0;
//     int n = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main()
// {


// int i = 5;
// int& j = i;
// cout<<i<<endl;
// i++;
// cout<<j<<endl;
// j++;
// cout<<j<<endl;
//     int n;
//     cin >> n;

    // variable size array
    // int *arr = new int[n];
    // //
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int ans = getSum(arr, n);
    // int ans = getSum(arr);


    // cout << "Answer is " << ans << endl;

    // double ch = '1.988';
    // cout << sizeof(ch) << endl;

    // double* c = &ch;
    // cout << sizeof(c) << endl;

    // int i = 5;
    // int &j = i;

    // int n = 5;
    // cout<<"Value of i "  << i <<endl;
    // i++;
    // cout<<"Value of i "  << i <<endl;
    // j++;
    // cout<<"Value of i "  << i <<endl;

    /*cout<<"Before "<< n  <<endl;
    update2(n);
    cout<<"After "<< n  <<endl;

    update2(n);
    */

    // case 1
//     while (true)
//     {
//         int i = 5;
//     }

//     // case 2
//     while (true)
//     {
//         int *ptr = new int;
//     } // Vey bad practice cuz "new int" jo hai wo heap mai store ho raha hai or heap mai humko manually memory free karni padthi hai or ismai baar baar 4 byte int ko jaa raha hai pointer toh sirf ek baar 8 he byte lega.

//     return 0;
// }

//****Mai jab code kar rhi thi tab mere mai error ah raha tha isiyle maine filhaal ke liye copy paste ki hu.

// #include<iostream>
// using namespace std;

// int getSum(int *arr, int n) {

//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {

//     int n;
//     cin >> n;

//     //variable size array
//     int* arr = new int[n];

//     //takin input in array
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);

//     cout << "answer is "<< ans << endl;
// return 0;
// }

#include<iostream>
using namespace std;

int getSum(int* arr, int n){
    int sum = 0;
    for(int i = 0; i<n;i++){
    sum += arr[i];
}
return sum;
}

int main(){

    int n;
    cin>>n;

    //Creating a dynamic array (i.e) [user will enter the size] using heap 
    //Basically creating variable size array
    int* arr = new int[n];

    //taking input in array
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int ans = getSum(arr, n);

    cout<<"The answer is "<<ans <<endl;

    return 0;
}