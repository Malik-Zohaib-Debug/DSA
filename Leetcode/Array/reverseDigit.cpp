#include<iostream>
using namespace std;
int main(){
	int num = 456;
	int val = 0;
	int count = 0;
	while (num != 0){
		int r = num % 10;
		count += r;
		val = val * 10 + r;
		num = num / 10;
	}
	
	cout << "Reversed Digit -> " << val << endl;
	cout << "Count -> " << count;
	return 0;
}
