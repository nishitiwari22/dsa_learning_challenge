/*
#include<iostream>
using namespace std;
int main() {
int i = 7;
cout<<(++i) <<endl; // i=8
cout<<(i++) <<endl; //i=8, i=9
cout<<(i--) <<endl; //i=8
cout<<(--i) <<endl; // 7 i=7 
return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main() {
int a, b = 1;
a = 10;

if(a++){
    cout <<b;
}
else{
    cout<<++b;
}

return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;

cout<<"printing count from 1 to n"<<endl;
int i =1;
for(; i <=n ;){
    cout<<i<<endl;
    i++;
}

return 0;
}
*/
// You can declare all the 3 parts outside the paranthesis()

/*
#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Daalo n ki value"<<endl;
cin>>n;

cout<<"printing count from 1 to n"<<endl;
int i = 1;
for(; ;){
    if(i<=n){
        cout<< i<<endl;
    }
    else{
        break;
    }
    i++;

}

return 0;
}
*/

#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Daalo n ka value"<<endl;
cin>>n;
int sum = 0;
for(int i =1; i<=n; i++){
//    sum = sum + i;
    sum += i;
cout<<sum<<endl;   
}

 return 0;

}