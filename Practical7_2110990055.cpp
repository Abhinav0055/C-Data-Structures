#include <iostream>
using namespace std;
int main()
{
    int option;
    int b;
    int n;
    int arr[n];
    int i, input, last, user, element, store, previous;
    int size;
    int elem;
    cout << "1  searching element" << endl;
    cout << "2  inserting element" << endl;
    cout << "3 deleting element" << endl;
    cout << "----------------------------------------------------------------";
    cout << "enter your choice..." << endl;
    cin >> option;
    cout << "Enter Size of the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    cout << "elements in the array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    if (option == 1)
    {
        cout << "enter the element you want to search:" << endl;
        cin >> b;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (b == arr[i])
            {
                found = true;
                // finding the index of the element found in the array

                cout << "element found at index:" << i << endl;
            }
        }
        if (found == true)
        {
            cout << "search found" << endl;
        }
        else
        {
            cout << "search not found" << endl;
        };
    }
    if (option == 2)
    {
        cout << "enter index on which you want to add element:";
        cin >> user;
        cout << "enter the element you want to add at specified index:";
        cin >> element;
        store = arr[user];
        arr[user] = element;
        for (int i = user + 1; i < n; i++)
        {
            previous = store;
            store = arr[i];
            arr[i] = previous;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
    if (option == 3)
    {
        cout << "Enter Element to be deleted: ";
        cin >> elem;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] >= elem)
            {
                arr[i] = arr[i + 1];
            }
            cout << arr[i] << " ";
        }
    }
}
