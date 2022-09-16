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

    CircularQueue()
    {
        size = 10001;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enqueue(int data)
    {
        if(front && rear == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
      
        }
        else if(front = (rear+1)%size){
            cout << "Queue Overflow" << endl;

        }
        else{
            rear = (rear+1)%size;
            arr[rear] = data;
        }
    }

    int dequeue()
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

     int display()
        {
            int i;
            if(front&& rear == -1)
            {
                cout << "Queue Empty" << endl;
                

            }
            else
            {
                while(i != rear)
                {
                    i = (i+1)%size;
                    cout << arr[i] << " ";
                }
            }
        }

};

int main()
{
    CircularQueue cq;
    cq.enqueue(45);
    cq.display();



    



}