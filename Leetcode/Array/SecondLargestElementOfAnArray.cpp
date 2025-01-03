#include<iostream>
using namespace std;

int getSecondLargestEle(int *arr, int size){
	int largest = arr[0];
	int slargest = -1;
	for(int i=0; i<size; i++){
		if(arr[i] > largest){
			slargest = largest;
			largest = arr[i];
		}
		if(arr[i] < largest && arr[i] > slargest){
			slargest = arr[i];
		}
	}
	return slargest;
}

int main(){
	int arr[] = {2,6,7,1,3,9};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Second Largest Element of An Array = " << getSecondLargestEle(arr, size);
	return 0;
}
