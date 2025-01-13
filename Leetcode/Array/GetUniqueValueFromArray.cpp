#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,1,2,2,3};
	int size = sizeof(arr)/sizeof(int);
	int uniqueValue;
	
	for(int i=0; i<size; i++){
		uniqueValue = uniqueValue ^ arr[i];
	}
	
	cout << "Unique Value " << uniqueValue;
	return 0;
}
