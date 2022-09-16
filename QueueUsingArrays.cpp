#include <iostream>
#include <queue>
using namespace std;

class Queue
{
    public:
    int *arr;
    int size;
    int Qfront;
    int rear;

    Queue()
    {
        size = 10000;
        arr = new int[size];
        Qfront = 0;
        rear = 0;
    }


    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (Qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[Qfront];
            arr[Qfront] = -1;
            Qfront++;
            if (Qfront == rear)
            {
                Qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool isEmpty()
    {
        if (Qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int front()
    {
        if (Qfront == rear)
        {
            return -1;
        }

        else
        {
            return arr[Qfront];
        }
    }
        int display()
        {
            if (Qfront && rear == -1)
            {
                cout << "Stack Empty" << endl;
            }
            else
            {
                for (int i = Qfront; i < rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
        }
    
};

    int main()
    {
        Queue q;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.display();
        cout << q.dequeue() << endl;
        q.display();

        


    }