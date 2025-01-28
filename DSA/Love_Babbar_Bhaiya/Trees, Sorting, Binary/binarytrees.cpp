
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

// node (int d){
//     this-> data = d;
//     this->left = NULL;
//     this->right = NULL;
// }
// };
// node *buildTree(node* root)
// {
//     cout << "Enter the data" << endl;
//     int data;
//     cin>>data;
//     root = new node(data);

//     if(data==-1){
// return NULL;
//     }

// cout << "Enter data for inserting in left node" << data << endl;
// root-> left = buildTree (root->left);
// cout << "Enter data for inserting in right node" << data <<endl;
// root-> right = buildTree (root->right);

// }

// int main()
// {

//     node* root = NULL;

//     root = buildTree(root);

//     return 0;
// }




// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//   node*  left;
//    node*  right;

// node(int d){
//     this-> data= d;
//     this->left = NULL;
//     this->right = NULL;

// }
// };

// node* buildTree(node* root)
// {
// cout<< "Enter the data" << endl;
// int data;
// cin >> data;
// root = new node(data);

// if(data==-1)
// {
//     return NULL;
// }

// cout<< "Enter the data for inserting in the left of " << data <<endl;
// root->left = buildTree(root->left);
// cout<< "Enter the data for inserting in the right of " << data <<endl;
// root->right = buildTree (root->right);

// }

// int main(){

// node* root = NULL;
// root = buildTree (root);
//     return 0;

// }

// Homework: reverse lvel order traversal, and iterative version of inorder, preorder and postorder traversal.

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) //right mai jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) //left mai jana hai
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}


    int lastOcc(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
     int mid = s + (e - s) / 2;
    int ans = -1;
   

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) //right mai jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) //left mai jana hai
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int even[11] = { 1,2,3, 3, 3, 3, 3, 3, 3, 3,5 };
    cout<<"First Occ of 3 is " << firstOcc (even, 11, 3 ) <<endl;
    cout<<"Last Occ of 3 is " << lastOcc (even, 11, 3 ) <<endl;
    
    return 0;
}