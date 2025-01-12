#include<iostream>
using namespace std;

bool isPalindrome(string word){
	int start = 0;
	int end = word.size() - 1;
	while(start < end){
		if(word[start] != word[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}

int main(){
	string word = "civic";
	bool status = isPalindrome(word);
	
	if(status == 1){
		cout << word << " is palindrome";
	} else {
		cout << word << " not palindrome";
	}
	
	return 0;
}
