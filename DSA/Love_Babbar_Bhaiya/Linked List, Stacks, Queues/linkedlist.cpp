#include <iostream>
#include <map>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory value
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data" << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // If we knew the length this is what we could have done.
    // if (len == position - 1)
    // {
    //     insertAtTail(tail, d);
    // }
    // CREATE NODE
    Node *temp = new Node(d);
    temp->next = head;
    temp = head;
}
void insertAtTail(Node *&tail, int d)
{
    // CREATE NODE
    Node *temp = new Node(d);
    tail->next = temp;
    // tail = tail->next;
    tail = temp;
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // CREATE NODE
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // created a new node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        delete temp;
    }
    else
    {

        // deleting any middle node or last node
    }
}

bool detectLoop(Node *head)
{
    // base case
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Cycle spotted " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node *floydDetectLoop(Node *head)
{
    // base case
    if (head == NULL)
        return 0;

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            cout << "Present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)

{
    if (head == NULL)
        return NULL;

    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{

    // base case
    if (head == NULL)
        return;

    Node *startOfLoop = getStartingNode(head);
    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}
int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    // print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    // print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);
    // print(head);

    insertAtPosition(tail, head, 5, 22);
    // print(head);

    // tail -> next = head -> next;

    // cout << "head" << head->data << endl;
    // cout << "tail" << tail->data << endl;

    tail->next = head->next;
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    print(head);

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Cycle is Present " << endl;
    }
    else
    {
        cout << " no cycle" << endl;
    }

    Node *loop = getStartingNode(head);
    cout << "loop starts at " << loop->data << endl;

    removeLoop(head);
    print(head);
    return 0;
}
