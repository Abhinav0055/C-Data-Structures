#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

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

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int d)
{
    if (head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int n, int d)
{ // Insert at Head
    if (n == 1)
    {
        insertAtHead(head,tail, d);
        return;
    }
    // Insert at Middle
    Node *temp = head;
    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->next;
    }

    // Insert at tail
    if (temp->next == NULL)
    {
        insertAtTail(head,tail, d);
        return;
    }

    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;
}

void DeleteNode(int position,Node* &head,Node* &tail){

    //deleting first node
    if ( position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }
    //deleting node 
    else{
        Node* curr = head;
        Node* prev = NULL;
        for (int i=1;i<position;i++){
            prev = curr;
            curr = curr -> next;


        } 
        if (position == 7){
            Node* curr = tail;
            curr -> prev = NULL;
            prev -> next = curr -> next;
            curr -> next = NULL;
            tail = prev;
            
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        
        delete curr; 
         cout << "prev " << prev -> data << endl;

    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    // cout << getLength(head)<<endl;

    insertAtHead(head,tail, 11);
    print(head);

    insertAtHead(head,tail, 13);
    print(head);

    insertAtHead(head,tail, 8);
    print(head);

    insertAtTail(head,tail, 25);
    print(head);

    InsertAtPosition(head, tail, 2, 100);
    print(head);

    InsertAtPosition(head, tail, 1, 101);
    print(head);

    InsertAtPosition(head, tail, 7, 102);
    print(head);

    DeleteNode(7,head,tail);
    print(head);
    cout << "tail " << tail -> data << endl;
   
    }