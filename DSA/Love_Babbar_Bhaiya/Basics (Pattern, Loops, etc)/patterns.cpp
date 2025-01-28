#include <iostream>
// #include<conio.h> 
using namespace std;
int main()
{

    //***Pattern 1***
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //         cout << endl;
    // i = i + 1;

    // }

    //***Patttern 2

//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j =1;
//         while (j <= n)
//         {
//             cout << i;
//             j = j + i;
//         }

//         cout << endl;
//         i = i + 1;
//     }


//***Pattern 3

// int n;
// cin>>n;

// int i = 1;
// while(i<=n){
//     int j =1;
//     while(j<=n) {
//         // cout<<j; //Normal
//         cout << n-j+1; //For reversing the number
//         j=j+1;
//     }
//     cout<<endl;
//     i = i+1;
// }


// ***Pattern 4 (Count wala Pattern)

// int n;
// cin>>n;
// int i = 1;
// int count = 1;

// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<count<<" ";
//         count = count + 1;
//         j = j +1;
//     } 
//     cout<<endl;
//     i = i + 1;


//**Pattern 5 (Star jo triangle jaisa dikhta hai)

// int n;
// cin>>n;

// int row = 1;

// while(row<=n){
//     int col = 1;
//     while(col<=row){
//     cout<<"*";
//     col = col +1;
// }
// cout<<endl;
//  row = row +1;

// }

//**Pattern 6 (Numbers jo triangle jaisa dikhta hai)

// int n;
// cin>>n;

// int row = 1;

// while(row<=n){
//     int col = 1;
//     while(col<=row){
//     cout<<row;
//     col = col +1;
// }
// cout<<endl;
//  row = row +1;

// }


//**Pattern 7 (Count jo triangle jaisa dikhta hai) Home Work


// int n;
// cin>>n;
// int row = 1;
// int count = 1;


// while(row<=n){
// int col = 1;
// while(col<=row){
//     cout<<count<<" ";
// count = count + 1;
// col = col + 1;
// }
// cout<<endl;
// row = row + 1;

// }

//**Pattern 8 (Count jo triangle jaisa dikhta hai) Self Try


// int n;
// cin>>n;

// int row = 1;
// while(row<=n){
//     int col = 1;
//     // int value = row; //first approach
//     while(col<=row){
//         // cout<<value<<" "; //first approach
//         cout<<col + row -1<<" "; //second approach
//         col++;  //second approach
//         // value = value + 1; //first approach
//         // col = col + 1; //first approach
//     }
//     cout<<endl;
//     row = row+1;
// }

//**Pattern 9 (ulta Count jo triangle jaisa dikhta hai)

//This can be solved by also taking the value beforehand  
// int n;
// cin>>n;

// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<(row-col+1)<<" ";
//         col = col + 1;
//     }
//     cout<<endl;
//     row = row+1;
// }

//**Pattern 10

// int n;
// cin>>n;

// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=n){
//          char ch =  'A' + row - 1;
//         cout<<ch;
//         col = col + 1;
//     }
//     cout<<endl;
//         row = row + 1;
// }

//**Pattern 11

// int n;
// cin>>n;

// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=n){
//          char ch =  'A' + col - 1;
//         cout<<ch;
//         col = col + 1;
//     }
//     cout<<endl;
//         row = row + 1;

// }

//**Pattern 12 (Homework Count wale kir tarah)

// int n;
// cin>>n;
// int row = 1;
// char start = 'A';

// while(row<=n){
// int col = 1;
// while(col<=n){
//     cout<<start<<" ";
//     start = start + 1;
//     col = col + 1;
// }
// cout<<endl;
// row = row +1;
// }

//**Pattern 13
// int n;
// cin>>n;
// int row = 1;
// while (row<=n)
// {
//     int col = 1;
// while(col<=n)
// {
//     char ch = row + col - 1 + 'A' - 1;
//     cout<<ch;
//     col = col + 1;
// }
// cout<<endl;
// row = row + 1;
// }


// Kunal kushwaha

int n;
cin>>n;

for(int row = 1; row<=n; row++){
    for(int col=1; col<=row; col++){
        cout<< "*" <<endl;
        // cout<<endl;
}
// cout<<endl;
}

return 0;

}

