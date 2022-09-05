#include <iostream>
#include <queue>
using namespace std;

class CircularQueue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool pushFront(int data)
    {
        if ((front = 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is Full ";
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size-1)
        {
            front = size-1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
        return true;
    }

     bool pushRear(int data)
    {
        if ((front = 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is Full ";
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int popFront()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear ){
            front = rear = -1;
        }
        else if(front == size - 1)
        {
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
       
       int popRear()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear ){
            front = rear = -1;
        }
        else if(rear == 0)
        {
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

};

int main()
{


    



}