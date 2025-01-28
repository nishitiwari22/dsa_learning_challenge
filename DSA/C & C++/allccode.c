// https://www.w3schools.com/c/index.php (Refer for learning whole C)

// #include<stdio.h>

// struct vector {
//     int x;
//     int y;
// };

// int main() {
//     struct vector v1, v2;
// v1.x =34;
// v1.y =54;
// printf ("X dim is %d and Y is %d\n", v1.x, v1.y);

// v2.x = 3345;
// v2.y =534;

// printf("X dim is %D and Y dim is %d\n", v2.x, v2.y);
// return 0;

// }

// write a program with arRow operator
// write a program with a structure representing complex number

#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;
} comp;

void display(comp c)
{
    printf("the vaLue of real part id %d\n", c.real);
    printf("the value of Imaginary part is %d\n", c.complex);
}

int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real value for %d num\n", i + 1);
        scanf("%d", &cnums[i].real);

        printf("enter the complex value for %d num \n", i + 1);
        scanf("%d", &cnums[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    return 0;
}

// Create a structure representing  a bank account of a customer? What felids do you use and why

// ****** Function********

#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();
int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}
void GoodMorning()
{
    printf("good morning NISHI\n");
}

void goodAfternoon()
{
    printf("goodAfternoon  nishi\n");
}

void GoodNight()
{
    printf("goodNight nishi\n");
}





//Line Binary (Maybe?)
/*

#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Start searching (KEEP SEARCHING UNTIIL LOW <=HIGH)
    while (low <= high)
        ;
    mid = (low + high) / 2;
    if (arr[mid] == element)
    {
        return mid;
    }
    if (arr[mid] < element)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
}
// Searching ends
return - 1;

}

int main()
{
    // Unsorted array for linear search
    // int arr[] = {1, 33, 14, 5, 5, 66, 77, 88};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 14;
    // int searchIndex = linearSearch(arr, size, element);
    // printf("The element %d was found at index %d \n", element, searchIndex);
    // return 0;

    // Sorted array for binary seacrh
    int arr[] = {1, 3, 4, 5, 5, 66, 77, 88};
    int size = sizeof(arr) / sizeof(int);
    int element = 66;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}

// 😊Linked List Data Structure: Creation and Traversal

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node = *head;
    struct node = *second;
    struct node = *third;
    struct node = *fourth;

    // Allocate memory for nodes in the linked list in Heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    head->data = 14;
    head->next = third;

    // Link third and fourth nodes
    head->data = 21;
    head->next = fourth;

    // Link fourth and NULL
    head->data = 28;
    head->next = NULL;

    LinkedListTraversal(head);
    return 0;
} */