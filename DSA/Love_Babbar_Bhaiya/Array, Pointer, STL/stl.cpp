
//***Array****//

//  #include<iostream>
//  #include<array>

//  using namespace std;

//  int main()
//  {

// int basic[3] ={1,2,3};
// array<int,4> a= {1,2,3,4};

// int size = a.size();

// for(int i =0; i<size; i++){
//     cout<<a[i]<<endl;
// }
// cout<<"Element at second index->" <<a.at(2)<<endl;
// cout<<"Empty or not->" <<a.empty()<<endl;
// cout<<"First Element ->" <<a.front()<<endl;
// cout<<"Last Element-> " <<a.back()<<endl;

//     return 0;
//  }

//****Vector*****//

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {

//     vector<int> v;
//     cout << "Capacity -> " << v.capacity() << endl;

//     v.push_back(1);
//     cout << "Capacity -> " << v.capacity() << endl;

//     v.push_back(2);
//     cout << "Capacity -> " << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Capacity -> " << v.capacity() << endl;
//     cout << "Size -> " << v.size() << endl;

//     cout<< "Element at 2nd Index " << v.at(2) << endl;

//     cout << "front " << v.front() << endl;
//     cout << "back " << v.back() << endl;

//     cout << "before pop " << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     v.pop_back();

//     cout << "after pop" << endl;
//     for (int i : v)
//     {
//         cout << i << " " << endl;
//     }

//     cout << "before clear size " << v.size() << endl;
//     v.clear();
//     cout << "after clear size  " << v.size() << endl;
//     return 0;
// }

//  Maps (Geeks for Geeks video)
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    map<int, int> map1; // Empty map container

    // insert elements in random order
    map1.insert(pair<int, int>(6, 50));
    map1.insert(pair<int, int>(1, 40));
    map1.insert(pair<int, int>(2, 30));
    map1.insert(pair<int, int>(3, 60));
    map1.insert(pair<int, int>(4, 50));
    map1.insert(pair<int, int>(5, 20));
    map1.insert(pair<int, int>(6, 50));
    map1.insert(pair<int, int>(7, 30));

    // Printing map map1
    map<int, int>::iterator itr;
    map1.erase(3);
    map1.erase(map1.begin(), map1.find(4));

    cout << "\nThe map map1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = map1.begin(); itr != map1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << endl;
    }
    cout << endl;

    // Printing map map1
    // map<int, int>::iterator itr;
    // cout << "The size of map is : " << map1.size() << endl;
    // map1.clear();
    // cout << "The size of map is : " << map1.size() << endl;
    // cout << "Max size of map is : " << map1.max_size() << endl;
}