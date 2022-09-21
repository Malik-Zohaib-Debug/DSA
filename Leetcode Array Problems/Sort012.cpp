#include<iostream>
using namespace std;
int main()
{
	int arr[] = {1,0,2,1,2,1,0,1,0,0,1,1,2};
	int size = sizeof(arr)/sizeof(int);
	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	for(int i=0; i<size; i++){
		if(arr[i] == 0){
			count0++;
		}
		else if(arr[i] == 1){
			count1++;
		}
		else{
			count2++;
		}
	}
	for(int i=0; i<count0; i++){
		arr[i] = 0;
	}
	for(int i=count0; i<(count0+count1); i++){
		arr[i] = 1;
	}
	for(int i=(count0+count1); i<(count0+count1+count2); i++){
		arr[i] = 2;
	}
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
