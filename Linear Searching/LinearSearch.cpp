#include<iostream>
using namespace std;

bool linearSearching(int arr[], int size, int key){
  bool found = false;
  for(int i=0; i<=size; i++){
    if(arr[i] == key){
      found = true;
      return found;
      break;
    }
  }
  return found;
}

int main(){
  int arr[] = {1,4,2,5,7,6,9};
  int size = sizeof(arr)/sizeof(int);


  if(linearSearching(arr, size, 8) == 1){
    cout << "Found";  
  }
  else{
    cout << "Not Found";
  }
  
  return 0;
}
