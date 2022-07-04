#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1; 
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;


}

int main(){
    int n;
    int i = 1;
    cout<<"Enter the no to find the factorial"<<endl;
    cin>>n;
    if(i<n){
    cout<<factorial(n);
    }
    else{
        cout<<"Answer is not available.";
    }

}