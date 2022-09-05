#include <iostream>
#include <queue>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int rear;

    Queue(){
        size = 10000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    
  void enqueue(int data){
        if(rear == size){
            cout << "Queue is Full " << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(front == rear ){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool isEmpty(){
        if (front == rear){
            return true;
        }
        else{
            return false;

        }
    }

    int front(){
        if (front == rear){
            return -1;
        }

        else{
            return arr[front];
        }
        
    }
};



int main (){
  
    


}