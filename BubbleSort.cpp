#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insert_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
}
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {

        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swapped = true;
                swap(arr, j + 1, j);
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter Size of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements in the Array: ";
    insert_arr(arr, n);
    bubblesort(arr, n);
    cout << "Array after Sorting: " << endl;
    print_arr(arr, n);
    cout << endl;

    return 0;
}