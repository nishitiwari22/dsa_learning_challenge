/*
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int baic[4] = {1,2,3,4};

    array<int, 4> a = {1,2,3,4};

    // Array STL ki implementation fixed size ke static array se hoti hai!

    //Finding the size:

    int size = a.size();

    for(int i = 0; i<size; i++){
    cout<<a[i]<<endl;
    }

    //Some more operations: Time complexity is 0(1)
    cout<<"Element at index 2 is "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"Front element "<<a.front()<<endl;
    cout<<"Back element "<<a.back()<<endl;

        return 0;
}
*/

//****Vector*****
// (It is a dynamic array incase programmer adds more element than the size of vector then vector doubles it' size)
// It will copy all the elements in the doubled vector that got created and copy all the elemenst and dump the original vector.
// We can even shrink it.

/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    vector<int> a (5, 1); // 5 is the size of the vector and all the elements in the vector will be intitalized by 1
    
    cout << "Print a " ;
     for (int i:a){
    cout<<i<<" ";
     }

     vector<int> last(a); //Copying a in a vector named last
    cout << "Print last " ;
     for (int i:last){
    cout<<i<<" ";
     }

    cout << "Size of vector " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size of vector " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size of vector " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size of vector " << v.capacity() << endl; // Shows space for elements
    cout << v.size() << endl;                          // Shows number of elements

    cout << "Front element " << v.front() << endl;
    cout << "Back element " << v.back() << endl;

    cout<<"Before pop ";
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    
    cout << "After pop " ;
     for (int i:v){
    cout<<i<<" ";

    cout<< "Before clear size "<<v.size()<<endl;
    v.clear(); // Imp: Clear karne par size sero hota hai capacity nhi
    cout<< "After clear size "<<v.size()<<endl;

     }
    return 0;
}
*/


// //****Dequeue (Doubly Ended Queue) *****
// Dynamic and it's random access is also possible

/*
#include <iostream>
#include <deque>
using namespace std;
int main()
{

deque<int> d;

d.push_back(1);
d.push_front(2);

for(int i : d){
    cout<<i<<" ";
}

// d.pop_front();
// cout<<endl;
// for(int i : d){
//     cout<<i<<endl;
// }

    cout << "Front element " << d.front() << endl;
    cout << "Back element " << d.back() << endl;

    cout<< "Empty or not "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1); //It is important to give the range from where user wants to delete.
    cout<<"After  erase "<<d.size()<<endl;



return 0;
}
*/

//****List***** (Doubly linked list)
// Direct access is not possible like .at we have to traverse the  whole list


/*
#include <iostream>
#include <list>
using namespace std;
int main()
{

list<int> l;
list<int> n(5, 100);
cout<<"Printing n" <<endl;
for(int i: n){
    cout<<i<<endl;
}cout<<endl;

l.push_back(1);
l.push_front(2);

for (int i: l){
    cout<<i<<" ";
}
cout<<endl;
l.erase(l.begin());
cout<<"after erase"<<endl;
for(int i : l){
    cout<<i<<" ";
}

cout<<"Size of a list"<<l.size()<<endl;



return 0;
}
*/

// *****  Stack ***** (LIFO)

/*
#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<string> s;

    s.push("Nishi");
    s.push("Tiwari");
    s.push("Hamster");

    cout<<"Top Element " <<s.top()<<endl;
    s.pop();
    cout<<"Top Element now "<<s.top()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;


return 0;
}
*/

//  ***** Queue ****** (FIFO)
/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<string> q;

    q.push("Shri");
    q.push("Radha");
    q.push("Krishna");

    cout<<"Top element in queue "<<q.front()<<endl;
    q.pop();
    cout<<"Top element in queue "<<q.front()<<endl;
    cout<<"Size of queue "<<q.size()<<endl;
    cout<<"Empty or not "<<q.empty()<<endl;

    return 0;
}

*/

/*

// **** Priority Queue ****

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // In priority queue the front eleemnt will be the maximum. 

    //max heap
    priority_queue <int> maxi;

    //min heap
    priority_queue <int, vector<int> ,greater <int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);

cout<<"Size-> "<<maxi.size()<<endl;
int n = maxi.size();
for(int i = 0; i<n; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}cout<<endl;


    mini.push(1);
    mini.push(2);
    mini.push(3);

cout<<"Size-> "<<mini.size()<<endl;
int m = mini.size();
for(int i = 0; i<m; i++){
    cout<<mini.top()<<" ";
    mini.pop();
}cout<<endl;


cout<< "Hanji khali ghai kya ?? -> "<<mini.empty()<<endl;

return 0;
}
*/



// **** Set **** Time - O(logn)
// Unique (One time storage), Cannot modify, Sorted 

// Set is slow compared to unordered set. The output is random i.e not sorted.

/*
#include <iostream>
#include <set>
using namespace std;
int main()
{

set<int> s;

s.insert(5);
s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);
s.insert(1);

for(auto i:s){
    cout<<i<<endl;
}cout<<endl;

set<int>::iterator it = s.begin();
it++;

s.erase(it);

for(auto i:s){
    cout<<i<<endl;
}
cout<<endl;
cout<<"-5 is present or not -> "<<s.count(-5)<<endl;

set<int>::iterator itr = s.find(5);

for(auto it=itr; it!=s.end(); it++){
    cout<<*it<<" ";
}cout<<endl;

return 0; 
}
*/

// **** Map ****

/*
#include <iostream>
#include <map>
using namespace std;
int main()
{

map<int, string> m;

m[1] = "Nishi";
m[2] = "Tiwari";
m[3] = "Hamster";

// m.insert({5, 'lol'});

cout<<"Before Erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<"Finding 13-> "<<m.count(-13)<<endl;

//m.erase(13);
cout<<"after erase "<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl<<endl;

auto it = m.find(5);

for(auto i=it; i!=m.end();i++){
    cout<<(*i).first<<endl;
}
return 0;
}
*/

//  **** STL Algorithms ******

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6-> "<<binary_search(v.begin(), v.end(), 6)<<endl;
    
    cout<<"Lower Bound "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"Upper Bound "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<< "max -> "<<max(a,b);
    cout<< "min -> "<<min(a,b);

    swap(a, b);
    cout<<endl<<"a -> "<<a<<endl;

    string n = "nishi";
    reverse(n.begin(), n.end());
    cout<<"string-> "<<n<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
return 0;
}