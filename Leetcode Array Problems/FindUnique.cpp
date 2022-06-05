#include<iostream>
using namespace std;
void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
void findUnique(int arr[], int size){
  int ans = 0;
  for(int i=0; i<size; i++){
    ans = ans ^ arr[i];
  }
  cout << "Unique -> "; 
  cout << ans << endl;
}
int main(){
  int arr[] = {2,4,7,2,7};
  int size = sizeof(arr)/sizeof(int);
  printArray(arr, size);
  findUnique(arr, size);
  return 0;
}
