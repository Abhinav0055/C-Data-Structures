#include<iostream>
using namespace std;

int insertionsort(int arr[],int n){
    int i , j ,key;
    for(i=1;i<=n;i++){
        key=arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}
int insert_arr(int arr[],int n){
     for ( int i = 0; i < n; i++)
    {

        cin >> arr[i];  
    }
}
int print_arr(int arr[],int n){
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cout << "Size of the Array Element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements in the Array: ";
    insert_arr(arr,n);
    insertionsort(arr,n);
    print_arr(arr,n);

    return 0;





}