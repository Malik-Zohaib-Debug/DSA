#include<iostream>
using namespace std;

bool containsDuplicate(int *arr, int size){
	bool isFlag;
	for(int i=0; i<size; i++){
		bool isFlag = false;
		for(int j=i+1; j<size; j++){
			if(arr[i] == arr[j]){
				isFlag = true;
				return true;
			}
		}
	}
	return isFlag;
}

int main(){
	int arr[] = {1,2,3,1};
	int size = sizeof(arr)/sizeof(int);
	
	cout << containsDuplicate(arr, size);
	return 0;
}
