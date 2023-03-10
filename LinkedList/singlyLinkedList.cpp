#include<iostream>
using namespace std;

class LinkedList{
	public:
		struct Node{
			int data;
			Node* nextAddress;
		};
		Node* head;
	public:
	LinkedList(){
		head = NULL;
	}
	void insertNodeAtHead(int data);
	void insertNodeAtTail(int data);
	void displayLinkedList();
};
void LinkedList::insertNodeAtHead(int data){
	Node* newNode = new Node;
	newNode -> data = data;
	newNode -> nextAddress = NULL;
	
	if(head == NULL){
		head = newNode;
		//tail = newNode;
	} else {
		newNode -> nextAddress = head;
		head = newNode;
	}
}
void LinkedList::displayLinkedList(){
	Node* nodePtr;
	nodePtr = head;
	//nodePtr = tail;
	
	if(head == NULL){
		cout << "There is no node in the linkedlist" << endl;
		return;
	}
	
	while(nodePtr != NULL){
		cout << nodePtr -> data << " ";
		nodePtr = nodePtr -> nextAddress;
	}
}
void LinkedList::insertNodeAtTail(int data){
	Node* newNode = new Node;
	newNode -> data = data;
	newNode -> nextAddress = NULL;
	
	if(head == NULL){
		newNode = head;
	} else {
		Node* nodePtr;
		nodePtr = head;
		while(nodePtr -> nextAddress != NULL){
			nodePtr = nodePtr -> nextAddress;
		}
		nodePtr -> nextAddress = newNode;
	}
}
int main()
{
	LinkedList l1;
	// insertion at head
    l1.insertNodeAtHead(1);
	l1.insertNodeAtHead(2);
	l1.insertNodeAtHead(3);
	
    // insertion at tail
    l1.insertNodeAtTail(4);
	l1.insertNodeAtTail(5);
	l1.displayLinkedList();
    
	return 0;
}