#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int size){
	int sizeSum = 0;
	for(int i=1; i<=size; i++){
		sizeSum = sizeSum + i;
	}
	int arraySum = 0;
	for(int i=0; i<size; i++){
		arraySum = arraySum + arr[i];
	}
	int total = sizeSum + arraySum;
	int missingNum = total - sizeSum;
	return missingNum;
}

int main()
{
	int arr[] = {6,1,2,8,3,4,7,10,5} 
	int N = sizeof(arr)/sizeof(int);
	cout << missingNumber(arr, N);
	return 0;
}
