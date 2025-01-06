#include<iostream>
using namespace std;

void moveZerosToEnd(int *arr, int size){
	int nonZeros = 0;
	for(int i=0; i<size; i++){
		if(arr[i] != 0){
			swap(arr[i], arr[nonZeros]);
		nonZeros++;
		}
	}
}

void displayArray(int *arr, int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int arr[] = {0,1,0,3,12};
	int size = sizeof(arr)/sizeof(int);
	
	displayArray(arr, size);
	moveZerosToEnd(arr, size);
	cout << endl;
	displayArray(arr, size);
	
	return 0;
}
