#include <iostream>
#include <vector>
using namespace std;

void PrintArray(int arr[]){
    
    
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                arr[j] = -1;
            }
        }

    }
    for(int i=0;i<10;i++){
        if(arr[i]!=-1){
        cout << arr[i] << " ";
        }
    }


}



int main(){
    // In a tuition class of 10 students, 4 to 5 students scored similar marks.
    // the arrays of marks have to taken and marks to be initialized at the begining itself in the array declaration
    // make a function to show the marks which are unmatched ,the marks to be displayed once in the output.
    int arr[10] = {45,60,68,14,68,45,60,45,14,79};
    PrintArray(arr);







}