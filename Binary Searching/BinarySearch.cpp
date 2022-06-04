#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}

bool binarySearch(int arr[], int size, int key){
  int start = 0;
  int end = size - 1;
  int middle = (start + end) / 2;
  while(start <= end){
    if(arr[middle] < key){
      start = middle + 1;
    }
    else if(arr[middle] == key){
      return true;
    } 
    else{
      end = middle - 1;
    }
    middle = (start + end) / 2;
  }
  return false;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(arr)/sizeof(int);

  printArray(arr, size);
  
  if(binarySearch(arr, size, 8) == 1){
    cout << "\n\nFound" << endl;
  }
  else{
    cout << "\n\nNot Found" << endl;
  }
  
  return 0;
}
