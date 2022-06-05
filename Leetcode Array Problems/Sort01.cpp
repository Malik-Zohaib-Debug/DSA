#include<iostream>
using namespace std;
void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
void sort01(int arr[], int size){
	int left = 0;
	int right = size - 1;
	while(left < right){
		while(arr[left] == 0 && left < right){
			left++; 
		}
		while(arr[right] == 1 && left < right){
			right--;
		}
		if(arr[left] == 1 && arr[right] == 0 && left < right){
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
}
int main(){
	int arr[] = {1,1,0,0,0,0,1,0};
	int size = sizeof(arr)/sizeof(int);
	printArray(arr, size);
	sort01(arr, size);
	printArray(arr, size);
	return 0;
}
