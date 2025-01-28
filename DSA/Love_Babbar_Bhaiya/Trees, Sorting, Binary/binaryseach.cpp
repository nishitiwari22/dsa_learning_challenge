// left: end = mid - 1
// right: start = mid + 1

#include<iostream>
using namespace std;
int binarySearch (int arr[], int size, int key){

int start = 0;
int end = size -1;

int mid =start + (end - start)/2;

while(start<=end){
  if(arr[mid] == key){
    return mid;
}
//Go to right wala part
if(key>=arr[mid]){
start = mid + 1;
}
    else{
        end = mid - 1;
    }

 mid =start + (end - start)/2;

}
    return -1;

}

int main() {

int even[6] ={2, 3, 5, 6, 7, 8};
int odd[5]= {1, 3, 5, 9, 7};

int evenIndex = binarySearch(even, 6, 5);

cout<<"Index of 5 is "<<evenIndex<<endl;
int oddIndex = binarySearch(odd, 5, 9);
cout<<"Index of 9 is "<<oddIndex<<endl;

return 0; 
} 