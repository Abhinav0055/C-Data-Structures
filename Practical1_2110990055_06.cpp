#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the two numbers :-";
    cin>>a>>b ;
    c = a;
    a = b;
    b = c;
    cout << "a =" << a <<endl << "b ="<<b ;
    return 0;
}