#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int partition(int arr[], int s, int e){
	int pivot = arr[s];
	int count = 0;
	for(int i=s+1; i<=e; i++){
		if(arr[i] <= pivot){
			count++;
		}
	}
	int pivotIndex = s + count;
	swap(arr[pivotIndex], arr[s]);
	int i=s, j=e;
	while(i < pivotIndex && j > pivotIndex){
		while(arr[i] <= pivotIndex){
			i++;
		}
		while(arr[i] > pivotIndex){
			j--;
		}
		if(i < pivotIndex && j > pivotIndex){
			swap(arr[i++], arr[j--]);
		}
	}
	return pivotIndex;
}

void quickSort(int arr[], int s, int e){
	if(s>=e){
		return ;
	}
	int p = partition(arr, s, e);
	quickSort(arr, s, p-1);
	quickSort(arr, p+1, e);
}

int main()
{
	int arr[] = {2,1,4,3,5,9,8};
	int n = sizeof(arr)/sizeof(int);
	int s=0, e=n-1;
	
	//before calling sorting algo
	printArray(arr, n);
	
	//after calling sorting algo
	quickSort(arr, 0, n-1);
	printArray(arr, n);
	
	return 0;
}
