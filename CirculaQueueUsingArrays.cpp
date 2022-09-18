#include <iostream>
#define SIZE 10

using namespace std;

class CircularQueue
{
private:
    int items[SIZE], front, rear;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        if (front == rear + 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full Insertion Not allowed"<<endl;
        }
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            cout << endl
                 << "Element Inserted is " << element << endl;


        }
    }

    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue is empty Deletion Not Allowed" << endl;
            return (-1);
        }
        else
        {
            element = items[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            } 
            else
            {
                front = (front + 1) % SIZE;
            }
            return (element);
        }
    }

    void display()
    {
    
        int i;
        if (isEmpty())
        {
            cout << endl
                 << "Empty Queue" << endl;
        }
        else
        {
            cout << "Front -> " << front;
            cout << endl
                 << "Items -> ";
            for (i = front; i != rear; i = (i+1) % SIZE)
                cout << items[i]<<" ";
            cout << endl
                 << "Rear -> " << rear;
        }
    }
};

int main()
{
    CircularQueue q;

   
    q.enQueue(127);
    q.enQueue(129);
    q.enQueue(149);
    q.enQueue(159);
    q.enQueue(169);
    q.enQueue(192);
    q.enQueue(500);
    q.enQueue(500);
    q.enQueue(250);
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.display();
}