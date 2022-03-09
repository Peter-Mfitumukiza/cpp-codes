#include<iostream>
using namespace std;
struct Node{
	public:
		Node *previous;
		int data;
		Node *next;
	public:
		Node(int data){
		this->previous=NULL;
		this->data=data;
		this->next=NULL;
	}
};
struct Doubly{
	public:
		Node *head;
		Node *tail;
	public:
		Doubly(){
			head = NULL;
			tail = NULL;
		}
	public:	
	Node *addBefore(int data){
		Node *newNode=new Node(data);
		if(head == NULL){
			head=newNode;
			tail = newNode;
			return newNode;
		};
		head->previous=newNode;
		newNode->next=head;
		head=newNode;
		return newNode;
	};
	Node *addToEnd(int data){
		Node *newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
			return newNode;
		}
		tail->next = newNode;
		newNode->previous = tail;
		tail = newNode;
	}
	void insertAfter(Node *node, int data){
        if(node == NULL){
            cout<<"Passed NULL Pointer"<<endl;
            return;
        }
       Node *newNode = new Node(data);
       if(node->next == NULL){
           node->next = newNode;
           newNode->previous = node;
           tail = newNode;
           return;
       }
       Node *nextNode = node->next;
       node->next = newNode;
       newNode->previous = node;
       newNode->next = nextNode;
       nextNode->previous = newNode;
    }
	void printFromEnd(){
		if(tail == NULL){
			cout<<"Empty list"<<endl;
			return;
		}
		Node *current = tail;
		while(current!= NULL){
			cout<<current->data<<endl;
			current = current->previous;
		}
	}
	public:
		void printFromFront(){
			if(head == NULL){
				cout<<"Empty list"<<endl;
				return;
			};
			Node *current=head;
			while(current != NULL){
			cout<<current->data<<endl;
			current=current->next;	
			};
		};
};
int main(){
struct Doubly doubly;

	doubly.addToEnd(12);	
	Node *stored = doubly.addToEnd(13);
	doubly.addToEnd(14);
	doubly.insertAfter(stored, 24);
	doubly.printFromEnd();
	return 0;
}
