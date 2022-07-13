#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter Array Element: ";
    cin>>n;
    int a,elem,i;
    int arr[n];
    cout<<"Enter the Elements in the Array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Element to be searched: ";
    cin >> a;
    bool b = false;
    for(i=0;i<n;i++){
        if(a==arr[i]){
            b = true;
            cout<<"b found at index: "<<i<<endl;
        }
    }

    if(a==false){
            cout<<"b not found"<< endl;
            cout<<"Unsuccessful"<< endl;
        }
    else{
        cout<<"Successful";
    }
    
    
    
}
