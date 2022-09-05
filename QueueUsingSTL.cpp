#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    cout << "Queue in front is : " << q.front() << endl;

    q.push(15);
    cout << "Queue in front is : " << q.front() << endl;

    q.push(13);
    cout << "Queue in front is : " << q.front() << endl;

    cout << "Size of the queue : " << q.size() << endl;

    q.pop();

    cout << "Size of the queue : " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }











}