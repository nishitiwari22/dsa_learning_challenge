#include <iostream>
using namespace std;

// void print (int *p) {
//     cout << *p << endl;

// }

// void update (int *p){
//     p = p+1;
// // cout<< "inside"<<p <<endl;
// }

// int getSum(int arr[], int n)
// int getSum(int *arr, int n) //both works the same way

// {

//         cout<< "Size of " <<sizeof(arr) <<endl;

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // sum += arr[i];
//                 sum += i[arr]; //both works the same way

//     }
//     return sum;
// }

//     void update(int **p2){
//    // p2 = p2 +1;
//    // // Any change? - NO

// //    *p2 = *p2 +1;
//     ////Any change? - YES (Value of P2 will increment by one that is 4 byte)

//   **p2 = **p2 +1;
////Any change? - YES **P2 will increment by 1
//}

// int main()
//  {

//**********MCQ's!**********

// First mcq

// int first = 8;
// int second = 18;
// int *ptr = &second;
// *ptr = 9;

// cout<< first << " " << second << endl;

// Second mcq

// int first = 6;
// int *p = &first;
// int *q = p;
// (*q)++;
// cout<< first << endl;

// Third mcq

// int first = 8;
// int *p = &first;
// cout << (*p)++ << " " <<endl;
// cout << first << endl;

// Fourth mcq

// int *p = 0;
// int first = 100;
//  p = &first; //  // *p = first; It will give segmentation error
// cout << *p << endl;

// Fifth mcq

// int first = 8;
// int second = 11;
// int *third = &second;
//  first = *third;
// *third = *third + 2;
// cout << first <<" " <<second << endl;

// Sixth mcq

// float f = 12.5;
// float p = 21.5;
// float* ptr = &f;
//  (*ptr)++;
//  *ptr = p;
//  cout << *ptr  <<" " << f <<" " << p << endl;

// Seventh mcq

// int arr[5];
// int *ptr;
// cout << sizeof(arr) <<" "<< sizeof(*ptr) << endl;

// Eight mcq

// int arr[] = {11, 21, 13, 14};
// cout << *(arr) << " "<< *(arr+1) << endl;

// Ninth mcq

// int arr[6] = { 11, 12, 13};
// cout << arr+1 << endl;

// Tenth mcq

// int arr[6] = { 11, 21, 31};
// int *p = arr;

// cout << p[2] << endl;

// Eleventh mcq

// int arr[] = {11, 12, 13, 14, 15};
// cout<< *arr <<" " << (*arr+3) << endl;
// arr
// & arr
// &arr[0] all are same

// 12th mcq

// char ch = 'a';
// char* ptr = &ch;
// ch++;
// cout << *ptr << endl;

// Thirteen mcq

// char arr[] = "abcde";
// char *p = arr;
// cout << p << endl;

// Fourteen mcq

// char arr[] = "abcde";
// char *p = arr;
// p++;
// cout << p << endl;

// Fifteen mcq

// char str[] = "nishi";
// char* p = str;
// cout << str[0] <<" " << p[0] << endl;

// Sixteen mcq

// void update( int *p){
// *p = (*p) * 2;
// }
// int main()
//  {
//     int i = 10;
//     update(&i);
// cout << i << endl;

// Seventeen mcq

// int first = 110;
// int *p = &first;
// int **q = &p;
// int second = (**q)++ + 9;
// cout<< first << " " << second << endl;

// Eighteen mcq

// int first = 100;
// int *p = &first;
// int **q = &p;
// int second = ++(**q);
// int *r = *q;
// ++(*r);
// cout<< first << " " << second << endl;

// 19th mcq

// void increment(int **p)
// {
//     ++(**p);
// }

// int main()
// {
// int i = 100;
// int *ptr = &i;
// increment(&ptr);
// cout << i << endl;

// int i = 5;
// int* p = &i;
// int** p2 = &p;

// cout << "All good! " << endl;

// cout<< "Printing p" << p <<endl;
// cout<< "Address of p" << &p <<endl;

// cout<< i  <<endl;

// cout<<  *p <<endl;

// cout<<  **p2 <<endl;

// cout<<  &i <<endl;
// cout<<  p <<endl;
// cout<<  *p2 <<endl;

// cout<<  &p <<endl;
// cout<<  p2 <<endl;

// int num = 5;

// cout<< num <<endl;
// Address of operator
// cout<<"Address of num is "<< &num <<endl;

// int *ptr= &num;

// cout<<"Address is "<< ptr<<endl;
// cout<<"Value is " << *ptr<<endl;

// double d = 4.3;
// double *p2 = &d;

// cout<<"Address is "<< p2<<endl;
// cout<<"Value is " << *p2<<endl;

// cout<<"Size of integer is " << sizeof(num) <<endl;
// cout<<"Size of pointer is " << sizeof(ptr) <<endl;
// cout<<"Size of pointer is " << sizeof(p2) <<endl;

// Pointer will save 8 byte size of address of any data type.

//***Bad Practice****

// Pointer to int is created, and pointing to some garbage address therefore to avoid this point it to 0 and 0 i.e nul memory does not exist and hence segmentation error

// int ptr;
// cout<< "ptr"<< ptr <<endl;

// int *ptr = 0;
// cout<< *ptr <<endl;

// int i = 5;
// int *p = &i;
// cout<< p << endl;
// cout << *p <<endl;

// int *p = 0;
// p = &i;

// cout<< p << endl;
// cout<< *p <<endl;

// int num = 5;
// int a = num;
// cout<< " a before " << num <<endl;
// a++;
// cout<< " b before " << num <<endl;

// int *ptr = &num;
// cout<< "before " << num <<endl;
// (*ptr)++;
// cout << "after "<< num <<endl;

// //copying a pointer
// int *q = p;
// cout<<p<<"-"<<q<<endl;
// cout<<*p<<"-"<<*q<<endl;

// //Important concept
// // int i = 3;
// int *t = &i;
// cout<< (*t)++ << endl;
// *t = *t + 1;
// cout<< *t << endl;
// cout<< "before t " << t <<endl;
// t = t-1;
// cout<< "after t " << t <<endl;

//****Pointers video 2*******

// int arr[10] = {23,123,41,67};

// cout<<"Address of first memory block " << arr <<endl;
// cout<<"Address of first memory block " << &arr[0] <<endl;
// cout<<arr[0] <<endl;
// cout<<"4th " << *arr <<endl;
// cout<<"5th " << *arr+1 <<endl;
// cout<<"6th " << *(arr+1) <<endl;
// cout<<"7th " << *(arr)+1 <<endl;
// cout<<"8th " << arr[2] <<endl;
// cout<<"9th " << *(arr+2) <<endl;

// int i = 3;
// cout<<i[arr]<<endl;

// int temp[10] = {1,2};
// cout<< sizeof(temp) <<endl;
// cout<<"1st" << sizeof(temp) <<endl;
// cout<<"2nd" << sizeof(&temp) <<endl;

// int *ptr = &temp[0];
// cout<< sizeof(ptr) <<endl;
// cout << sizeof(*ptr) <<endl;
// cout<< sizeof(&ptr) <<endl;

// int a[20] = {4,6, 8, 10, 12};

// cout<< "->" << &a[0]<<endl; //same  as 2 and  3
// //cout<< &a <<endl; //same  as 1 and  3
// //cout<< a <<endl; //same  as 2 and  1

// int *p = &a[0];

// cout<< "->" <<&p<<endl; //same  as 2 and  3
// cout<< p <<endl; //same  as 1 and  3
// cout<< *p <<endl; //same  as 2 and  1

// int arr[10];
// ERROR
// arr = arr+1;

// int *ptr = &arr[0];
// cout<< ptr <<endl;
// ptr = ptr + 1;
// cout<< ptr <<endl;

// int arr[5]={1,2,3,4,5};
// char ch[6] = "abcde";

// cout << arr<< endl;
// //attention here cout works differently on int array and character array
// cout << ch<< endl;

// char *c = &ch[0];
// //prints entire string whereas pointer's prints address
// cout<<c<<endl;

// char temp = 'z';
// char *p = &temp;

// cout<< p << endl;

//***Pointers and Functions****//

// int value = 5;
// int *p = &value;

// print(p);

// cout<<"Before" << *p <<endl;
// update(p);
// cout<<"After" << *p <<endl;

// int arr[5] = {1, 2, 3, 4, 5};
// cout << "Sum is " << getSum(arr, 5) << endl;

//   int arr[6] = {1, 2, 3, 4, 5,8};
//     cout << "Sum is " << getSum(arr+3, 3) << endl;

//****Pointers video 3*******

// Double Pointer

// cout <<endl;

//     cout<< " Before " <<i <<endl;
//     cout<< " Before " <<p <<endl;
//     cout<< " Before " <<p2 <<endl;

// cout <<endl;
// update(p2);

//     cout<< " After " <<i <<endl;
//     cout<< " After " << p <<endl;
//     cout<< " After " << p2 <<endl;

// ***************** Codestudio mcq's****************************

// 1)   // int *ptr = 0;
//  int a = 10;
//  *ptr = a;

// cout << *ptr << endl;  // This will give error

// 2)   // int a = 7;
// int *c = &a;
// c = c + 1;
// cout << a << " " << *c << endl; // Output 7  and Garbage_value

// 3)
// int a[5];
// int *c;
// cout << sizeof(a) << " " << sizeof(c); // Output 20 8

// 4)
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a + 1); //Output 1 2

// 5) // int a[3] = {1, 2, 3};
// cout << *(a + 2); // Output 3 (They'll trick you my giving the address of teh 0th index)

// 6) // int a[] = {1, 2, 3, 4};
// int *p = a++;
// cout << *p << endl;  // Output error

// 7)  {
//     int arr[] = {4, 5, 6, 7};
//     int *p = (arr + 1);
//     cout << *arr + 9;
// }

// 8)   // char b[] = "xyz";
//  char *c = &b[0];
//  cout << c << endl;  // Output: xyz (c stores the address of start of array b {and not of it's values}. So the entire array is printed when c is printed)

// 9)
// char arr[20];
// int i;
// for (i = 0; i < 10; i++)
// {
//     *(arr + i) = 65 + i;
// }

// *(arr + i) = '\0';
// cout << arr;

// 10)

// int numbers[5];
// int *p;
// p = numbers;
// *p = 1;
// p = &numbers[2];
// *p = 20;
// p--;
// *p = 30;
// p = numbers + 3;
// *p = 40;
// p = numbers;
// *(p + 4) = 50;
// for (int n = 0; n < 5; n++)
// {
//     cout << numbers[n] << ",";
// }

// char st[] = "ABCD";

// for (int i = 0; st[i] != '\0'; i++)
// {
//     cout << st[i] << *(st) + i << *(i + st) << i[st];
// }

// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
// float *ptr1 = &arr[0];
// float *ptr2 = ptr1 + 3;
// cout << *ptr2 << " ";
// cout << ptr2 - ptr1;

// *******************void fun(int a[])**************************
// {
//     cout << a[0] << " ";
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
//     return 0;
// }

//************************ void swap(char *x, char *y)******************

// {
//     char *t = x;
//     x = y;
//     y = t;
// }

// int main()
// {
//     char *x = "ninjasquiz";
//     char *y = "codingninjas";
//     char *t;
//     swap(x, y);
//     cout << x << " " << y;
//     t = x;
//     x = y;
//     y = t;
//     cout << " " << x << " " << y;

//     return 0;
// }

// void Q(int z)
// {
//     z += z;
//     cout << z << " ";
// }

// void P(int *y)
// {
//     int x = *y + 2;
//     Q(x);
//     *y = x - 1;
//     cout << x << " ";
// }
// int main()
// {
//     int x = 5;
//     P(&x);
//     cout << x;
//     return 0;
// }

// int f(int x, int *py, int **ppz)
// {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     x = *py;
//     x += 3;
//     return x + y + z;
// }

// int main()
// {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
//     return 0;
// }

void increment(int **p)
{
    (**p)++;
}
int main()
{
    int num = 10;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
}