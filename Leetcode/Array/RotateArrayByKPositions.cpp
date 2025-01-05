#include<iostream>
using namespace std;

void rotate(int *arr, int size, int k){
	int temp[size];
	
	for(int i=0; i<size; i++){
		temp[(i+k)%size] = arr[i];
	}
	
	for(int i=0; i<size; i++){
		arr[i] = temp[i];
	}
}

void displayArray(int *arr, int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int size = sizeof(arr)/sizeof(int);
	
	displayArray(arr, size);
	cout << endl;
	rotate(arr, size, 3);
	cout << endl;
	displayArray(arr, size);
	
	return 0;
}
