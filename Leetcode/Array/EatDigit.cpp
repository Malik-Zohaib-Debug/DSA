#include<iostream>
using namespace std;

void eatDigit(int *arr, int size){
	if(size == 2){
		if(arr[0] < arr[1]){
			return;
		}	
	}
	
	for(int i=0; i<size-1; i++){
		if(arr[i] > arr[i+1]){
			arr[i+1] = arr[i] + arr[i+1];
			delete arr[i];
		}
		else if(arr[i] < arr[i+1]){
			break;
		}
	}
	return;
}

void displayArr(int *arr, int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	} cout << endl;
}

int main(){
	int arr[] = {5, 6, 7};
	int size = sizeof(arr)/sizeof(int);
	
	// displaying array before calling eat digit function
	displayArr(arr, size);
	
	// calling eat digit function
	eatDigit(arr, size);
	
	// displaying array after calling eat digit function
	displayArr(arr, size);
	
	return 0;
}
