#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Size of the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements in the Array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }


    
    for (int i=n+1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    
}