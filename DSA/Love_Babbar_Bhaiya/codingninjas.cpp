// #include<iostream>
// using namespace std;
// int main(){
//     char arr [20];
//     int i;
//     for( i =0; i < 10; i++) {
//     *(arr + i) = 65 + i;

//     }
//     *(arr + i) = '\0';
//     cout << arr;
//     return 0;
// }



// #include <iostream>
//  using namespace std; 
//  int main(){
// int numbers [5];
//  int * p; p = numbers; 
//  *p = 10; p = &numbers[2]; 
//  *p = 20; p--; 
//  *p = 30;
//   p = numbers + 3; 
//   *p = 40; p = numbers; 
//   *(p+4) = 50;
 
//    for (int n=0; n<5; n++) 
//   {
// cout << numbers[n] << ",";
//   }
// return 0;
// }



// #include<iostream>
//  using namespace std;
//   int main() {
// char st[] = "ABCD"; 
// for(int i = 0; st[i] != '\0'; i++) {
// cout << st[i] << *(st)+i << *(i+st) <<i[st];
// }
// return 0;
// }




// #include  <iostream>
// using namespace std; 
// int main(){
// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5}; 
// float *ptr1 = &arr[0]; 
// float *ptr2 = ptr1 + 3;
//  cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;
//    return 0;
// }






// #include  <iostream>
// using namespace std; 
// int main(){
// int f(int x, int *py, int **ppz) {
// int y, Z;
//  **ppz += 1; 
// z = **ppz; 
// *py += 2; y = 
// *py; x += 3; 
// return x + y + z;
// }
// int main() {
// int c, *b, **a;
//  C = 4; 
//  b = &c; 
//  a = &b; 
//  cout << f(c, b, a); 
// return 0;
// }



// #include <iostream>
// using namespace std; 
// void Q(int z)
// {
// z += z; 
// cout<<z<< " ";
// }

// void P(int *y)
// {
// int x = *y + 2; 
// Q(x);
// *y = x - 1;
// cout<<x<< " ";
// }

// int main() {
// int x = 5;
// P(&x);
//  cout <<x; 
// return 0;
// }


// #include <iostream>
// using namespace std; 

// void square(int *p)
// {
// int a = 10; 
// p = &a; 
// *p = (*p) * (*p);
// }
// int main() 
// { 
//     int a = 10; 
//     square(&a);
//      cout << a << endl;
// return 0;
// }


// #include <iostream>
// using namespace std; 
// void fun(int a[]){
//     cout << a[0] << " ";
// }
// int main() 
// { 
//     int a [] = {1,2,3,4};
//     fun (a + 1);
//      cout << a[0] << endl;
// return 0;
// }























// #include <bits/stdc++.h>

// bool isSafe(int newx, int newy, vector< vector<bool>> &vis,  vector<vector<int>> &arr, int n )
// if((newx >=0 && newx < n) && (newy >= 0 && newy < n) && vis [newx][newy] != 1 && arr[newx][newy] == 1){
//     return true;
// }
// else {
//     return fasle;
// }


// void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string>, &ans,
//            vector<vector<bool>> &vis, string path) {
//   // base case
//   if (x == n - 1 && y == n - 1) {
//       ans.push_back(path);
//       return;
//   }

//   //4 Movement
  
//       // DOWN
//           int newsx = x + 1;
//     int newsy = y;
//     if (isSafe(newsx, newy, n, visited, m))
//     {
//         path.push_back('D');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }
//     //UP
//         int newsx = x + 1;
//     int newsy = y;
//     if (isSafe(newsx, newy, n, visited, m))
//     {
//         path.push_back('D');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }

//     //LEFT
//         int newsx = x + 1;
//     int newsy = y;
//     if (isSafe(newsx, newy, n, visited, m))
//     {
//         path.push_back('D');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }

//     //RIGHT

//         int newsx = x + 1;
//     int newsy = y;
//     if (isSafe(newsx, newy, n, visited, m))
//     {
//         path.push_back('D');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }



// }
// vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//     vector < string > ans;
//     vector < vector<bool>> visited (n, vector<bool> (n,0));
//     string path = "";

// solve(0, 0, n, arr, visited, path);
// return ans;
//     // Write your code here.
// }
int getPivot(int arr[], int n)

{



int s = 0;
int e= n-1;

int mid = s + (e-s)/2;

while(s<e){
    if(arr[mid] >= arr[0])
    s = mid + 1;
}
else{
    e = mid;

}
mid = s + (e-s)/2;

}

return s;

int binarySearch(int s, int e, int key)

int start = s;
int end = e;

int mid = s + (e-s)/2;

while(start<=end)

//go to right wala part

if (key > arr[mid]){
    start = mid+1;
}
else{//key <arr[mid])
end = mid - 1;
}

 mid = start + (end-start)/2;

}
return -1;
}









char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int start = 0;
    // int n = s.length;
    int end = n - 1;
    while (start < end){
    if(!isalnum(s[start])) start++;
    else if(!isalnum(s[end])) end--;
    
        else{ 
            if( toLowerCase(a[start]) != toLowerCase(a[end]))
           {
            return 0;
        }

            start++;
            end--;
        }
    }
    return 1;
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}