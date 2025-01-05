#include<iostream>
using namespace std;

void leftRotateArray(int *arr, int n){
	int temp = arr[0];
	for(int i=1; i<n; i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}

void displayArray(int *arr, int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
	
	displayArray(arr, size);
	cout << endl;
	leftRotateArray(arr, size);
	cout << endl;
	displayArray(arr, size);
	
	return 0;
}
