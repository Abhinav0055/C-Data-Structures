#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int n, int d)
{ // Insert at Head
    if (n == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    // Insert at Middle
    Node *temp = head;
    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->next;
    }

    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;

    // Insert at tail
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
}

void DeleteNode(int position, Node *&head)
{

    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
    }
    // deleting node
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        for (int i = 1; i < position; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node
    Node *node1 = new Node(100);
    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);
    InsertAtTail(tail, 120);

    print(head);

    InsertAtTail(tail, 150);

    print(head);

    int n;
    cout << "Position you want to enter the new node: ";
    cin >> n;
    int d;
    cout << "Enter the data of the new node: ";
    cin >> d;

    InsertAtPosition(tail, head, n, d);
 
    print(head);

    int pos;
    cout << "Position you want to delete the node: ";
    cin >> pos;

    DeleteNode(pos, head);

    print(head);

    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    return 0;
}