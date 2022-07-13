#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Element: ";
    cin>>n;
    int elem,i;
    int arr[n];
    cout<<"Enter the Elements in the Array: ";
    for(i=0;i<n;i++){
        
        cin>>arr[i];
       
    }
    cout<<"Enter Element to be inserted at last: ";
    cin>>elem;
    arr[i]=elem;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Size of New Array: "<< sizeof(arr);
    


    
}
