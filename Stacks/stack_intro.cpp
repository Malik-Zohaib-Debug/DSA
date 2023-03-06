#include<iostream>
using namespace std;

class stack{
    public:
        int top;
        int size;
        int *arr;

        public:
            stack(int n){
                this -> size = n;
                this -> top = -1;
                arr = new int[size];
            }
            void push(int data);
            int pop();
};

void stack::push(int data){
    if(top < size - 1){
        top++;
        arr[top] = data;
        cout << "At index " << top << " you inserted " << arr[top] << endl;
    } else {
        cout << "stack is full" << endl;
    }
}

int stack::pop(){
    if(top == -1){
        cout << "Stack is empty" << endl;
    } else {
        int ele = arr[top];
        top--;
        cout << ele << " popped from the stack";
    }
}

int main()
{
    stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    
    s.pop();

    return 0;
}