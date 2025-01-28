// /*
// #include <iostream>
// using namespace std;
// int main()
// {

//     char ch = '1';
//     int num = 1;

//     switch (ch)
//     {
//     case 1:
//         cout << "This is case 1" << endl;
//         // continue;
//     case '1': 
//     switch(num)
//     {
//       case 1:  cout << "Value of num is " <<num << endl;
//         break;
//     }
//     break;
//     default:
//         cout << "This is default" << endl;
//     }
//     return 0;
// }
// */





// **Homework** (You are stuck in an infinite while loop and you have used the switch statement how will I come out of the loop without using the break statement. Hint: using exit())



/*#include <iostream>
using namespace std;
int main()
{

    while(1){
        cout<<"How you doing"<<endl;
int num = 1;
switch (num)    

{
    case 1: cout<<"This is switch statement"<<endl;
    break;
}
exit(0);
    }
return 0;
}*/

// ANSWER: BY PUTTING EXIT(0) , WE CAN EXIT OUT OF INFINITE LOOP.


// Mini calc

#include <iostream>
using namespace std;
int main()
{

int a;
int b;
cout<<"Enter a"<<endl;
cin>>a;
cout<<"Enter b"<<endl;
cin>> b;
char op;
cout<<"Enter operation"<<endl;
cin>> op;

switch (op)    {
    case '+': cout<<(a+b)<<endl;
    break;

    case '-': cout<<(a-b)<<endl;
    break;

    case '*': cout<<(a*b)<<endl;
    break;

    case '%': cout<<(a%b)<<endl;
    break;

    default: cout<<"Please enter a valid number"<<endl;

}
return 0;
}