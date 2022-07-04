#include <iostream>
using namespace std;

int main() {
    int a, b, c, s, A;
    cout << "Enter the three numbers :-";
    cin>>a>>b>>c ;
    s = a + b + c;
    A = s/3;
    cout << "The average of three numbers are:" << A;
    return 0;
}