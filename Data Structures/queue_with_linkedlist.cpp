#include <iostream>
using namespace std;
struct Node{
	public:
		int data;
		Node *next;
	public:
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

struct Queue{
	public:
		Node *front;
		Node *rear;
	public: 
		Queue(){
			front = rear = NULL;
		}
		void enqueue(int data){
			Node *temp = new Node(data);
			if(rear == NULL){
				front = rear = temp;
				return;
			}
			rear->next = temp;
			rear = temp;
		}
		void dequeue(){
			if(front == NULL){
				cout<<"The queue is empty"<<endl;
				return;
			}
			Node *temp = front;
			front = front->next;
			if(front == NULL){
				rear == NULL;
			}
			delete(temp);
		}
		void display(){
			if(rear == NULL){
				cout<<"Queue is empty"<<endl;
				return;
			}
			Node *current = front;
			while(current != NULL){
				cout<<current->data<<"  ";
				current = current->next;
			}
		}
};

int main(){
	Queue my_queue;
	my_queue.enqueue(10);
	my_queue.enqueue(20);
	my_queue.enqueue(30);
	my_queue.display();
	my_queue.dequeue();
	cout<<"After Dequeue"<<endl;
	my_queue.display();
}
