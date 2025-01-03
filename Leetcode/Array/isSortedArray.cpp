#include<iostream>
using namespace std;

bool isSortedArray(int *arr, int size){
	if(size == 1){
		return true;
	}
	
	for(int i=1; i<size; i++){
		if(arr[i-1] <= arr[i]){
			continue;
		} else {
			return false;
		}
	}
	return true;
}

int main(){
	int arr[] = {1,2,1,3,4};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Is Sorted Array ? " << (isSortedArray(arr, size) == 1 ? "Yes" : "NO");
	return 0;
}
