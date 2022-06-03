#include<iostream>
using namespace std;

bool isPowerof2(int n){
	int ans = 1;
	for(int i=0; i<=30; i++){
		if(ans == n){
			return true;
		}
		ans = ans * 2;
	}
	return false;
}

int main(){
	
	if(isPowerof2(36) == 1){
    	cout << "True";
	}
  	else{
    	cout << "False";
  	}
	
	return 0;
}
