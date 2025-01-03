#include<iostream>
using namespace std;

int removeDuplicates(int *arr, int size){
	int i=0;
	for(int j=1; j<size; j++){
		if(arr[j] != arr[i]){
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}

int main(){
	int arr[] = {1,2,2,2,2,3,3,3};
	int size = sizeof(arr)/sizeof(int);
	
	
	cout << "Total unique elements = " << removeDuplicates(arr, size);
	return 0;
}
