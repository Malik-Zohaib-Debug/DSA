#include<iostream>
using namespace std;

void arrayIntersection(int arr1[], int size1, int arr2[], int size2){
  for(int i=0; i<size1; i++){
    int ele = i;
    for(int j=0; j<size2; j++){
      if(arr1[ele] == arr2[j]){
        cout << arr1[ele] << " " ; 
      }
    }
  }
}

int main(){
	
  int arr1[] = {10, 15, 22, 80};
  int size1 = sizeof(arr1)/sizeof(int);
  int arr2[] = {5, 10, 11, 22, 70, 90};
  int size2 = sizeof(arr2)/sizeof(int);

  arrayIntersection(arr1, size1, arr2, size2);
  
  return 0;
}
