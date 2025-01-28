#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {

        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " " << endl;
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
        }

        // step 1:put last element into first index

        arr[1] == arr[size];
        // step 2: remove last element
        size--;

        // step 3: take root node to it's correct position
        int i = 1;
        while (i < size)
            ;
        int LeftIndex = 2 * i;
        int RightIndex = 2 * i + 1;

        if (LeftIndex > size && arr[i] < arr[LeftIndex])
        {
            swap(arr[i], arr[LeftIndex]);
            i = LeftIndex;
        }
        else if (RightIndex > size && arr[i] < arr[RightIndex])
        {
            swap(arr[i], arr[RightIndex]);
            i = RightIndex;
        }
        else
        {
            return;
        }
    }
};


//  Edited this max heap code and made it to min heap and submitted the answer on coding ninjas
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n){
int size = n;
while(size >1){
    // step1: swap
    swap(arr[size], arr[1]);
    size--;

    //step2:
    heapify(arr, size, 1);
}
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(52);
    h.insert(53);
    h.insert(54);

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    //heap creation
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Printing the array now " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

//heapSort
heapSort(arr, n);
    cout << "Printing the sorted array " << endl;


cout <<"PRINTING priority queue"<<endl;

//max heap
priority_queue<int>pq;

pq.push(3);
pq.push(5);
pq.push(4);
pq.push(6);
pq.push(7);

cout<<"Printing the biggest element"<<pq.top()<<endl;
pq.pop();
cout<<"Printing the biggest element"<<pq.top()<<endl;
cout<<"Printing the biggest element"<<pq.size()<<endl;
if(pq.empty()){
    cout<<"pq is empty "<<endl;
}
else{
        cout<<"pq is not empty "<<endl;

}

//min heap
priority_queue<int, vector<int>, greater<int> >minheap;

minheap.push(4);
minheap.push(2);
minheap.push(5);
minheap.push(3);

cout<<"Element at top"<<minheap.top()<<endl;
minheap.pop();
cout<<"Element at top"<<minheap.top()<<endl;
cout<<"Size is"<<minheap.size()<<endl;
if(minheap.empty()){
    cout<<"minheap is empty "<<endl;
}
else{
        cout<<"minheap is not empty "<<endl;

}

    return 0;
}

// Time complexity of building a heap is O(n)

// **** Commenst ke notes****
// sir, i think you may have missed this condition in this code
// while(i<size){
//              int leftindex=2*i;
//              int rightindex=2*i+1;
             
//              if(leftindex<size&&arr[i]<arr[leftindex]&&arr[leftindex]>arr[rightindex]){
//                  swap(arr[i],arr[leftindex]);
//                  i=leftindex;
//              }
//              else if(rightindex<size&&arr[i]<arr[rightindex]&&arr[rightindex]>arr[leftindex]){
//                  swap(arr[i],arr[rightindex]);
//                  i=rightindex;
//              }
//              else{
//                  return ;
//              }
//              }

// This should be correct method of delete element. Stiil, You are forgetting the case where root's both children having greater value
// void deletetion()
//     {
//         arr[1] = arr[size];
//         size--;

//         int root = 1, left, right;
//         left = root * 2;
//         right = root * 2 + 1;

//         while ((arr[root] < arr[left] or arr[root] < arr[right]) and left<=size) 
//         {
//             if (arr[root] < arr[left] and arr[left]>arr[right])
//             {
//                 swap(arr[root], arr[left]);
//                 root = left;
//             }

//             else if (arr[root] < arr[right] and right<=size and arr[right]>arr[left])
//             {
//                 swap(arr[root], arr[right]);
//                 root = right;
//             }

            
//             left = root * 2;
//             right = root * 2 + 1;
            
//         }
//     }


// I think it will be like this 

// 1. Less than size i.e within range
// 2. It should exist i.e, not Null
// 3. Parent must be less than left
// 4. Left must be greater than right

// Then
// swap parent with left 
// assign leftindex to i. 

// Don't forget to add && in between all conditions

// #include <iostream>
// using namespace std;

// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size =0;
//     }

//     void insert(int val)
//     {

//         size = size + 1;
//         int index = size;
//         arr[index] = val;

//         while (index > 1)
//         {
//             int parent = index / 2;

//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
//         void print()
//         {
//             for(int i = 1; i <= size; i++){
//                     cout << arr[i] << " " <<endl;
//         }
//         cout<<endl;
//     }
// };

// int main()
// {
// heap h;
// h.insert(50);
// h.insert(52);
// h.insert(53);
// h.insert(54);
//     return 0;
// }
