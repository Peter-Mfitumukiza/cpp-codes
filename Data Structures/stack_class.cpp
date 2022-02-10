#include<iostream>
#define SIZE 10
using namespace std;
 
class Stack {
	private:
int stack[SIZE];
    	int top;
	public:
    	Stack(){
  	  top=-1;
    }
      
public:
 int  isEmpty(){
   	 if(top==-1)
    	return 1;
   	 else
    	return 0;   
    }
 int isFull(){
	if(top==(SIZE-1))
    	return 1;
	else
    	return 0;
    	}
 void push(int data){

	if(isFull()){
    	return ;
	}
	++top;
	stack[top]=data;

}

 void pop(){
	if(isEmpty())
    	return ;
	--top;
}

 void display(){

	cout<<"Stack Values: ";
	for(int i=top; i>=0; i--)
    	cout<<stack[i]<<" ";
	cout<<endl;
}
};

int main(){
    Stack stk;
    stk.push(100);
    stk.push(200);
    stk.push(200);
    stk.display();
    stk.pop();
    stk.display();
 return 0;
}
