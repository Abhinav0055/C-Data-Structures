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

void InsertNode(Node* &tail,int element, int d){

    if (tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;

    }
    else{
        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;



    }

}

void deleteNode(Node* &tail,int value){

    if(tail == NULL){
        cout<<"list is empty"<< endl;
        return;

    }
    else{
        Node *prev = tail;
        Node *curr = prev -> next;
        while(curr -> data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr==prev){
            tail = NULL;
        }

        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }


}

void print(Node* &tail){
    Node* temp = tail;
    if (tail == NULL){
        cout << "List is Empty" << endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;

    }
    while(temp != tail);
    cout<<endl;

}


int main(){
    Node* tail = NULL;
    InsertNode(tail,0,3);
    print(tail);
/*
    InsertNode(tail,3,5);
    print(tail);

    InsertNode(tail,5,7);
    print(tail);

    InsertNode(tail,7,9);
    print(tail);

    InsertNode(tail,5,6);
    print(tail);

    InsertNode(tail,9,10);
    print(tail);

    InsertNode(tail,3,4);
    print(tail);
    */

    deleteNode(tail,3);
    print(tail);

    return 0;
}