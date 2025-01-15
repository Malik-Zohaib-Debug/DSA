#include<iostream>
#include<vector>
using namespace std;

vector<int> removeDuplicates(int *arr, int size){
	vector<int> uniqueArr;
	for(int i=0; i<size; i++){
		int currentEle = arr[i];
		bool flag = false;
		for(int j=i+1; j<size; j++){
			if(currentEle == arr[j]){
				flag = true;
			}
		}
		if(!flag){
			uniqueArr.push_back(currentEle);
		}
	}
	return uniqueArr;
}

int main(){
	int arr[] = {1,1,2,2,3,4};
	int size = sizeof(arr)/sizeof(int);
	
	vector<int> resultantArr = removeDuplicates(arr, size);
	
	for(int i=0; i<resultantArr.size(); i++){
		cout << resultantArr[i] << " ";
	}
	
	return 0;
}
