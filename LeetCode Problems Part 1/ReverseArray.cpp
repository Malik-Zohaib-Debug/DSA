#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}

void reverseArray(int arr[], int size){
  int start = 0;
  int end = size - 1;

  while(start <= end){
  	int temp;
  	temp = arr[start];
  	arr[start] = arr[end];
  	arr[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {1,4,2,5,7,8,3};
  int size = sizeof(arr)/sizeof(int);

  cout << "Before Reversing: ";
  printArray(arr, size);
  cout<<endl;
  
  cout << "After Reversing: ";
  reverseArray(arr, size);
  printArray(arr, size);
  
  return 0;
}
