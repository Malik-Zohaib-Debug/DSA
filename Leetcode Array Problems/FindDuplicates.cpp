#include<iostream>
using namespace std;
void printArray(int arr[], int size){
	cout << "Original Array -> ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void findDuplicates(int arr[], int size){
	cout << "Duplicates -> ";
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(arr[i] == arr[j]){
        cout << arr[i] << " ";
      }
    }
  }
}
int main(){
  int arr[] = {1,2,1,2,4,7,8,9,4,5};
  int size = sizeof(arr)/sizeof(int);
  printArray(arr, size);
  findDuplicates(arr, size);
  return 0;
}
