// stack data structure

#include <iostream>
using namespace std;

class stack {
    public:
        int top;
        int size;
        int *arr;
    public:
        stack(int size){
            this -> size = size;
            this -> top = -1;
            arr = new int[size];
        }
        void push(int value){
            if(top < size - 1){
                top++;
                arr[top] = value;
                cout << "At index " << top << " you inserted " << arr[top] << endl;
            } else {
                cout << "Stack is full" << endl;
            }
        }
        void pop(){
            if(top == -1){
                cout << "Stack is empty" << endl;
            } else {
                int poppedValue = arr[top];
                top--;
                cout << poppedValue << " popped from the stack " << endl;
            }
        }
        int peek(){
            if(top == -1){
                cout << "There is no value in stack currently" << endl;
            } else {
                return arr[top];
            }
        }
        void clear(){
            if(top == -1){
                cout << "Stack is already empty" << endl;
            } else {
                this -> top  = -1;
                cout << "Stack is now cleared" << endl;
            }
        }
        void displayStack(){
            if(top == -1){
                cout << "Stack is empty" << endl;
            } else {
                for(int i=top; i>=0; i--){
                    cout << arr[i] << endl;
                }
            }
        }
};


int main() {
    stack s(5);
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.displayStack();
    
    s.clear();
    
    s.push(6);
    
    
    s.displayStack();

    return 0;
}