#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionsort(int arr[], int n)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {   
       int min = i;
        for (int j = i + 1 ; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min=j;
            }
        }
        if (min!=i)
        {
            swap(arr,min,i);
        }
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
int binarysearch(int arr[],int high,int low,int key){
        while (low <= high) {
      int mid = (low + high)/2;
      if (arr[mid] == key)
         return mid ;
      if (arr[mid] > key)
         return binarysearch(arr, high, mid-1, key);
      if (arr[mid] < key)
         return binarysearch(arr, mid+1, low, key);
   }
   return -1;
}

int main()
{
    int n;
    cout << "Enter Array Element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements in the Array: ";
    int key;
    
    insert_arr(arr, n);
    selectionsort(arr, n);
    cout << "enter the element to be searched "<<endl;
    cin>>key;
    print_arr(arr, n);
    int index = binarysearch (arr,0,n-1,key);
   if(index == -1){
      cout<< key <<" is not present in the array"<<endl;
   }else{
      cout<< key <<" is present at index "<< index <<" in the array";
   }
    

    return 0;
}