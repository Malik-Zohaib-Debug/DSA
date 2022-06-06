#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size){
	int start = 0;
	int end = size - 1;
	int midpoint = (start + end)/2;
	while (start < end){
		if(arr[midpoint] < arr[midpoint + 1]){
			start = midpoint + 1;
		}
		else{
			end = midpoint;
		}
		midpoint = (start + end)/2;
	}
	return start;
}

int main(){
	int arr[] = {3,4,5,2,1};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Peak Index Of Mountain Array -> " << peakIndexInMountainArray(arr, size);
	return 0;
}
