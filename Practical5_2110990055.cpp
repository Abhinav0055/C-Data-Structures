#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Element: ";
    cin >> n;
    int elem, i, pos, x;
    int arr[n];
    cout << "Enter the Elements in the Array: ";
    for (i = 0; i < n; i++)
    {

        cin >> arr[i];  
    }
    cout << "Enter Element to be inserted: ";
    cin >> elem;
    cout << "Postion in Array: ";
    cin >> pos;
    int arr1[n];
    for (i = n; i >= pos; i--)
    {
        if(i<pos){
            arr1[i]=arr[i];
        }
        else if(i==pos){
            arr[i]=elem;
        }
        else{
            arr[i]=arr[i-1];
        }
    }
    for (i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}