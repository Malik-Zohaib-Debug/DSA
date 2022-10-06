#include<iostream>
using namespace std;

class heap{
  public:
    int arr[100];
    int size;
    public:
      heap(){
        arr[0] = -1;
        size = 0;
      }
      void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
          int parent = index/2;
          if(arr[parent] < arr[index]){
            int temp = arr[parent];
            arr[parent] = arr[index];
            arr[index] = temp;
            index = parent;
          }
          else{
          	return;
		  }
        }
      }
      void printArray(){
        for(int i=1; i<=size; i++){
          cout << arr[i] << " ";
        }
        cout << endl;
      }
      void deleteFromHeap(){
      	if(size == 0){
      		cout << "Nothing to delete! Heap is empty.";
		  }
		arr[1] = arr[size];
		size--;
		int i=1;
		while(i<size){
			int leftIndex = 2*i;
			int rightIndex = 2*i+1;
			if(leftIndex < size && arr[i] < arr[leftIndex]){
				swap(arr[i], arr[leftIndex]);
				i = leftIndex;
			}
			else if(rightIndex < size && arr[i] < arr[rightIndex]){
				swap(arr[i], arr[rightIndex]);
				i = rightIndex;
			}
			else{
				return;
			}
		}
	  }
	  void heapify(int arr[], int size, int i){
	  	int largest = i;
	  	int leftIndex = 2*i;
	  	int rightIndex = 2*i+1;
	  	if(left < size && arr[largest] < arr[left]){
	  		largest = left;
		}
		if(right < size && arr[largest] < arr[right]){
			largest = right;
		}  
		if(largest != i){
			swap(arr[largest], arr[i]);
			heapify(arr, size, largest);
		}
	  }
	  void heapSort(int arr[], int size){
		while(size > 1){
			swap(arr[size], arr[1]);
			size--;
			heapify(arr, size, 1);
		}
	  }
};

int main()
{
  heap h;
  //insertion in heap
  h.insert(50);
  h.insert(55);
  h.insert(53);
  h.insert(52);
  h.insert(54);
  //printing heap
  h.printArray();
  return 0;
}
