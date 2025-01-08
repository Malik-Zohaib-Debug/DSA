#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &digits){
	for(int i=digits.size(); i>=0; i++){
		if(digits[i] < 9){
			digits[i]++;
			return digits;
		} else {
			digits[i] = 0;
		}
	}
	digits.push_back(0);
	digits[0] = 1;
	return digits;
}

int main(){
	vector<int> digits;
	digits.push_back(1);
	digits.push_back(2);
	digits.push_back(3);
	
	plusOne(digits);
	
	for(int i=0; i<digits.size(); i++){
		cout << digits[i] << " ";
	}
	return 0;
}
