#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int ele){
	int start = 0;
	int end = size - 1;
	int mid = (start+end)/2;
	while(start <= end){
		if(arr[mid] < ele){
			start = start + 1;
		} else if(arr[mid] > ele){
			end = end - 1;
		} else if(arr[mid] == ele){
			return mid;
		}
		mid = (start + end) / 2;
	}
	return mid;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(int);
	
	cout << binarySearch(arr, size, 7);
	return 0;
}
