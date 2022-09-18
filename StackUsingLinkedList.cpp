#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    // properties
    int data;
    Stack *next;
    Stack *top;

    // behaviour
    Stack(int data)
    {
        this->data = data;
        this->next = next;  
    }

    void push(int d)
    {

        Stack *temp = new Stack(d);
        temp->next = top;
        top = temp;

        if (!top)
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        Stack *temp;
        top = top->next;
        temp->next = NULL;
        if (top == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top != NULL)
        {
            return top->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

     st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    /*

    stack <int> s;

    s.push(2);
    s.push(3);

    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if (s.empty()){
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }
    */

    return 0;
}
