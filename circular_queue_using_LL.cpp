#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int a)
    {
        data = a;
        next == NULL;
    }
};

class Queue
{
public:
    Node *front, *rear;
    int size;
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enqueue(int a)
    {
        cout <<"Pushing "<< a <<" to the Circular Queue" << endl;
        size++;
        Node *temp = new Node(a);
        if (front == NULL)
        {
            front = temp;
        }
        else
            rear->next = temp;
        rear = temp; // rear=rear->next
        rear->next = front;
    }
    int dequeue()
    {
        if (front == NULL)
        {
            cout <<"The Circular Queue is empty" << endl;
            return -1;
        }
        size--;
        int a;
        if (front == rear)
        {
            a = front->data;
            delete front;
            front = rear = NULL;
            cout <<"Popping the top data "<< a <<" from the Circular Queue" << endl;
            return a;
        }
        Node *temp = front;
        a = temp->data;
        front = front->next;
        rear->next = front;
        delete temp;
        cout <<"Popping the top data "<< a <<" from the Circular Queue" << endl;
        return a;
    }
    void Show()
    {
        if (size == 0)
        {
            cout <<"The Circular Queue is empty."<< endl;
            return;
        }
        cout <<"The Queue is :";
        Node *temp = front;
        while (temp->next != front)
        {
            cout <<" "<< temp->data;
            temp = temp->next;
        }
        cout <<" "<< temp->data;
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(6);
    q.Show();
    q.enqueue(7);
    q.dequeue();
    q.dequeue();
    q.Show();
}