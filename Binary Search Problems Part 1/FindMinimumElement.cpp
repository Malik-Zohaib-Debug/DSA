#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int mid = (start+end)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return arr[start];
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(int);

    cout << "Minimum Value -> " <<  findPivot(arr, size);
    return 0;
}