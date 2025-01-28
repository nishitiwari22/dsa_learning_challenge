#include<iostream>
using namespace std;
int main(){

//creating 2d array
// int arr[3][4];
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
//taking input as row 

// cout<<" Input of row and col "<<endl;

for(int i =0; i<3;i++){
    for(int j = 0; j<4; j++){
cin>>arr[i][j];
}  
}

//taking input as col 
// cout<<" Input of row and col"<<endl;


// for(int col =0; col<4;col++){
//     for(int row = 0; row<3; row++){
// cin>>arr[row][col];
// } 
// }


//print
// for(int i =0; i<3;i++){
//     for(int j = 0; j<4; j++){
// cout<<arr[i][j];
// }  
// cout<<endl;
// }


for(int i =0; i<3;i++){
    for(int j = 0; j<4; j++){
cout<<arr[i][j] << " ";
}  
cout<<endl;
}
  return 0;
}