#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Original Array -> ";
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int replace_element_index;
	cout << "\nEnter the index of element you want to replace: ";
	cin >> replace_element_index;
	
	int replace_element;
	cout << "\nEnter the element you want to replace with: ";
	cin >> replace_element;
	
	for(int i=0; i<size; i++){
		if(i == replace_element_index){
			arr[i] = replace_element; 
		}
	}
	
	cout << "\nPrinting the array after replacing an element -> ";
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
