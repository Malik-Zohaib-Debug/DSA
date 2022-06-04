#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	cout << "Array -> ";
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void pairSum(int arr[], int size, int sum){
	cout << "\nFollowing are the pair sum" << endl;
	for(int i=0; i<size; i++){
		for(int j=1; j<size; j++){
			if(arr[i] + arr[j] == sum){
				cout << "{ " << arr[i] << ", " << arr[j] << " }" << endl;
			}
		}
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(int);
	
	printArray(arr, size);
	pairSum(arr, size, 15);
	
	return 0;
}
