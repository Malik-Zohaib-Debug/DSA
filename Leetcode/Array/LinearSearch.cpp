#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int ele){
	for(int i=0; i<size; i++){
		if(arr[i] == ele){
			return true;
		}
	}
	return false;
}

int main(){
	int arr[] = {2,4,1,0,-1,3};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Element Found At Index: " << linearSearch(arr, size, 3);
	
	
	return 0;
} 
