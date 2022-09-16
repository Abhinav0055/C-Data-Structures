#include <iostream>
using namespace std;

class queue{
    public:
    int data;
    queue *next, *front, *rear;

    queue(int data){
        this -> data = data;
        this -> next = NULL;
        front = NULL;
        rear = NULL;
    };

    void enqueue(int data){
        queue* temp = new queue(data);
        if(front == NULL && rear == NULL){
            front = rear = temp;
        }
        else{
            rear -> next = temp;
            rear = temp;
        }
    };

    void dequeue(){
        queue* temp = new queue(data);
        if(front == NULL && rear == NULL){
            cout<<"Queue is empty "<<endl;
        }
        else if(front != NULL){
            temp = front;
            front = front -> next;
            free(temp);
        }
        else{
            temp = front;
            free(temp);
        }
        cout<<endl;
    };

    void peek(int data){
        cout<< front -> data<<" ";
    };
    
    void display(){
        queue* temp = new queue(data);
        temp = front;
        while(temp != NULL ){
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    };
};

int main(){
    queue q(6);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();
}