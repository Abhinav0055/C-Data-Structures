#include <iostream>
using namespace std;

int interest(int p,int t){
    char G;
    cout<<"Enter Gender here";
    cin>>G;
    int r;
    if(G=='M'){
        r=10;
    }
    else if(G=='F'){
        r=20;
    }
    return p*r*t/100;




}

int main(){
    int p,t;
    cout<<"Enter Principal Amount and Time Period:";
    cin>>p>>t;
    t = t/365;
    cout<<"Simple Interest is :"<<interest(p,t);
}