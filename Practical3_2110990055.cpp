#include <iostream>
using namespace std;

void disp(string str){
    cout<< str <<endl;
    return;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

 int add(int &a, int &b){
    int sum;
    sum = a+b;
}
 
int main () {
   int a = 100;
   int b = 200;
   string str = "CallByValue";
   disp(str);
   swap(&a, &b);
   cout << add(a, b)<<endl;

 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}