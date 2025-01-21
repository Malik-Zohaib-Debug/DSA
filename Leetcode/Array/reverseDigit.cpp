#include<iostream>
using namespace std;

void reverseDigit(int num) {
	int val = 0;
	int count = 0;
	while (num != 0){
		int r = num % 10;
		count += r;
		val = val * 10 + r;
		num = num / 10;
	}
	cout << "Reversed Digit -> " << val << endl;
}

void countReverseDigit(int num){
	int val = 0;
	int count = 0;
	while (num != 0){
		int r = num % 10;
		count += r;
		val = val * 10 + r;
		num = num / 10;
	}
	
	cout << "Count -> " << count;
}

int main(){
	reverseDigit(456);
	countReverseDigit(456);
	return 0;
}
