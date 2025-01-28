// Selection sort [Use case: When array's size is small. Time Complexity: Best and Worst case both O(n^2) Space Complexity O(1)]



// https://stackoverflow.com/questions/20761396/why-selection-sort-can-be-stable-or-unstable (Nicely explained)
// Stable Sorting Algorithms preserves the order of the elements after sorting, whereas unstable algorithms doesn't preserved the order of elements.
// STABLE ALGORITHMS :- Merge, Insertion, Bubble sort.
// UNSTABLE ALGORITHMS:- Quick, Selection sort.

/*#include <vector>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}*/

// Selection sort is UNSTABLE.
// Below is the Selection Sort code using functions-

/*#include <iostream>
using namespace std;

void arrInput(int arr[], int n)
{
    cout << "Enter Array Input - ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }

    PrintArray(arr, n);
}
int main()
{
    int n; // SIZE OF ARRAY
    cout << "Enter the Size of Array- ";
    cin >> n;
    int arr[n];

    arrInput(arr, n);
    cout << "ARRAY TAKEN AS INPUT - ";
    PrintArray(arr, n);
    cout << endl;
    cout << "SORTED ARRAY IS - ";
    SelectionSort(arr, n);
    cout << endl;
    cout << "END OF PROGRAM" << endl;

    return 0;
// */

// Another logic for Selection Sort  -

/*
void selectionSort(vector<int> &arr, int n)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


*/
// Bubble  sort


#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{
    for(int i = 1; i<n; i++){
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-1; j++){
            //process element till n-i th index
            if(arr[j] < arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
        }


    }
    if(swapped == false){
        //already sorted
        break;
    }

    
}

}




// Insertion sort

#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& arr, int n)

{
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(j>=0; j--){
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                //ruk jao
                break;
            }
        }
        //copy temp value
        arr[j+1] = temp;
    }
}



// Merge sort (Fastest among all) and study (ApplicationS and Drawbacks of Merege Sort)

// Nishi, (s+e)/2 can overflow when both s and e have maximum possible value of integer i.e. 2^31-1.
// This will result in wrong answer.
// So to optimise this, we write-
// int mid= start + (end  -  start)/2 to handle such edge cases.

// Selection sort
// Selection sort



// Merge two sorted arrays (Leetcode)

#include<iostream>
#include<vector>
using namespace std;

    void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

        // Two pointer approach
        int i = 0;
        int j = 0;
         int k = 0;

         while( i <n &&  j < m){
            if( arr1[i] <  arr2[j]){
                arr3[k++] = arr1[i++];
                // k++;
                // i++;
            }
            else{
            arr3[k++] = arr2[j++];
            // k++;
            // j++;
         }

    }

    //copy first array 
    while(i<n)
{
    arr3[k++] = arr1[i++];
}

    //copy second array 

    while(j<m)
{
    arr3[k++] = arr2[j++];
}
    }

void print(int ans[], int n){
    for(int i =0; i<n; i++){
        cout<< ans[i]<<" ";
    }
    cout<<endl;
}
    
int main()
{


int arr1[5] = {1,2,3,7,9};
int arr2[3] = {4,5,6};
int arr3[8] = {0};

merge(arr1, 5, arr2, 3, arr3);
print(arr3, 8);

return 0;
}