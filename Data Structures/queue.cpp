#include <iostream>
using namespace std;

struct Queue{
	int front,rear,capacity;
	int *queue;
	Queue(int size){
		front = 0;
		rear = 0;
		capacity = size;
		queue = new int;
	}
	
	~Queue() { delete[] queue; }

	void enqueue(int data){
		if(rear == capacity){
			cout<<"The queue is full"<<endl;
			return;
		}
		queue[rear] = data;
		rear++;
	}
	
	void display(){
		if(rear == front){
			cout<<"Queue is empty";
			return;
		}
		for (int i = front; i<rear; i++){
			cout<<queue[i]<<endl;
		}
	}
	
	void dequeue(){
		if(rear == front){
			cout<<"Queue is empty.";
			return;
		}
		for(int i=0; i<rear-1; i++){
			queue[i] = queue[i+1];
		}
		rear--;
		cout<<"Dequeue function was a success."<<endl;
	}
	
	void readFront(){
		if(rear == front){
			cout<<"Queue is empty."<<endl;
			return;
		}
		cout<<"The element at front is: "<<queue[front];
	}
};

int main(){
	Queue q(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.display();
	q.dequeue();
	q.display();
	q.readFront();
	return 0;
}
