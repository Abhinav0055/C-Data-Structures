#include <iostream>
using namespace std;

int num = 200;

int localvar()
{

    int num = 150;
    return num;
}

int main()
{

    cout << " the local variable is: " << localvar() << endl;
    cout << "the global variable is: " << ::num;
    return 0;
}