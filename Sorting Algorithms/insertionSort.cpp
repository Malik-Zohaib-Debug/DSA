#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n){
    int i, j;
    for(i=1; i<n; i++){
        int temp = arr[i];
        for(j=i-1; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {5,1,4,2,8,9};
    int n = sizeof(arr)/sizeof(int);

    //before applying sorting algorithm
    printArray(arr, n);

    //applying insertion sort algorithm
    insertionSort(arr, n);

    //after apply sorting algorithm
    printArray(arr, n);

    return 0;
}