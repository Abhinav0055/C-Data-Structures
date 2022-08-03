#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int l , int h){
    int pivot=arr[l];
    int i=l;
    int j = h;
    while (i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr,i,j);
        }
    

    }
    swap(arr,i,l);
    return j;
}

int quicksort(int arr[],int l,int h)
{
    if(l<h){
        int pivot=partition(arr,l,h);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,h);

    }
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
int main()
{
    int n,i,j;
    cout << "Enter Array Element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements in the Array: ";
    insert_arr(arr, n);
    quicksort(arr,i,j);
    print_arr(arr, n);

    return 0;
}