#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
    //properties 
    char *arr;
    int top;
    int size;




    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }


    int getMIN(){
        int ans = INT_MAX;
        for(int i=0 ; i < top ; i++){

            ans = max(ans,Stack[i]);


        
            
        }
        return ans;
    }
    void push (char element){
        if (size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop (){
        if(top >= 0 ){
            cout << arr[top] << " ";
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
  
    }
    int peek(){
        if (top >= 0 ){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if ( top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};

int main()
{
    Stack st(7);

    st.push('A');
    st.push('B');
    st.push('H');
    
    st.push('I');
    st.push('N');
    st.push('A');
    st.push('V');

    st.pop();


}
