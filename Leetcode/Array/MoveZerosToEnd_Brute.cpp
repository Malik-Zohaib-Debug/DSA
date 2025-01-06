#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZerosToEnd(int *arr, int size){
    vector<int> temp;
    int totalZeros = 0;
    
    for(int i=0; i<size; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        } else {
        	totalZeros++;
		}
    }
    
    for(int i=0; i<totalZeros; i++){
    	temp.push_back(0);
	}
    
	return temp;
    
}

int main() {
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int size = sizeof(arr)/sizeof(int);
    
    vector<int> result = moveZerosToEnd(arr, size);
    
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}
