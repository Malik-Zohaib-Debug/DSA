#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	
	int row = 1;
	
	/*
		    1
		  3 2
		6 5 4
	      9 8 7 5
	*/
	
	while(row <= n){
		int space = n - row;
		while(space){
			cout << " ";
			space = space - 1;
		}
		int start;
		int col = 1;
		while(col <= row){
			if(start == 0){
				continue;
			}
				cout << start;
				start = start + 1;
				col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
	
	/*
		    *
		  * *
		* * *
	      * * * *
	while(row <= n){
		int space = n - row;
		while(space){
			cout << " ";
			space = space - 1;
		}
		int col = 1;
		while(col <= row){
			cout << "*";
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
	*/
	
	/*
	1
	1 2
	1 2 3
	1 2 3 4
	while(row <=n ){
		int col = 1;
		while(col <= row){
			cout << col << " ";
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
	*/
	
	/*
	1
	2 3
	4 5 6
	7 8 9 10
	while(row <= n){
		int start;
		int col = 1;
		while(col <= row){
			cout << start << " ";
			start = start + 1;
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
	*/
	
	return 0;
}
