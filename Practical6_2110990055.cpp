#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of the Array: ";
    cin >> n;
    int elem, i, pos, x;
    int arr[n];
    cout << "Enter the Elements in the Array: ";
    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    cout << "Enter Element to be deleted: ";
    cin >> elem;
    for (i = 0; i < n-1; i++)
    {
        if(arr[i] >= elem){
            arr[i]=arr[i+1];
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}