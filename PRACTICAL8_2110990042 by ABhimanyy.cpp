#include <iostream>
using namespace std;

int main()
{
  int arr[100];
  int size;
  cout << "Enter the array size " << endl;
  cin >> size;
  cout <<"Enter the array elements : ";
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  /*for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " " << endl;
    }*/
    int index;
    cout<<"Enter the iteration at which you want to check : ";
    cin>> index;
    for(int i = 0; i<size-1;i++){
      if(int i=index){
        for (i = 0; i < size; i++){
        cout << arr[i] << " ";
        }
        cout<<endl;
      }
        bool swapped = false;
        for(int j = 0;j<size-i-1;j++){
            if(arr[j+1]<arr[j]){
                swapped = true;
                int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=temp;
            }
        }
        if (!swapped){
            break;
        }
    }
    cout<<"The Final Array would be : ";
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;


}
