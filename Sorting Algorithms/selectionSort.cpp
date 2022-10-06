#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";		
	}
	cout << endl;
}

void selectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr[minIndex], arr[i]);
	}
}

int main()
{
	int arr[] = {29, 72, 98, 13, 87, 66, 52, 51, 36};
	int size = sizeof(arr)/sizeof(int);
	/*
	//before sorting
	printArray(arr, size);
	
	//after sorting
	selectionSort(arr, size);
	printArray(arr, size);
	
	*/
	cout << size;
	return 0;
}
