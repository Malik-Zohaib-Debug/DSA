#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

int main()
{
	int arr[] = {10, 1, 7, 6, 14, 9};
	int size = sizeof(arr)/sizeof(int);

	// before applying bubble sorting
	printArray(arr, size);
	
	//after applying bubble sort
	bubbleSort(arr, size);
	
	printArray(arr, size);
	return 0;
}
