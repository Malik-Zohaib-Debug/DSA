#include<iostream>
using namespace std;
int leftOccur(int arr[], int size, int key){
  int start = 0;
  int end = size - 1;
  int mid = (start + end)/2;
  int ans = -1;
  while(start <= end){
    if(arr[mid] == key){
      ans = mid;
      end = mid - 1;
    }
    else if(key < arr[mid]){
      end = mid - 1;
    }
    else if(key > arr[mid]){
      start = mid + 1;
    }
    mid = (start + end)/2;
  }
  return ans;
}
int rightOccur(int arr[], int size, int key){
  int start = 0;
  int end = size - 1;
  int mid = (start + end)/2;
  int ans = -1;
  while(start <= end){
    if(arr[mid] == key){
      ans = mid;
      start = mid + 1;
    }
    else if(key < arr[mid]){
      end = mid - 1;
    }
    else if(key > arr[mid]){
      start = mid + 1;
    }
    mid = (start + end)/2;
  }
  return ans;
}
int main()
{
  int arr[] = {1,2,3,3,3,3,4,5};
  int size = sizeof(arr)/sizeof(int);

  int LeftOccurrence = leftOccur(arr, size, 3);
  int RightOccurrence = rightOccur(arr, size, 3);

  int totalOccur = RightOccurrence - LeftOccurrence + 1;

  cout << "Total no. of occurrence = " << totalOccur << endl;
}
