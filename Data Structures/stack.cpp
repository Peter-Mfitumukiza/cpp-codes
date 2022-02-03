#include <iostream>
#include <climits>
using namespace std;

const int size = 20;
int top = -1;
int stack[size];

int isFull(){
    if(top == size-1)
        return 1;
    return 0;
}

int isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}

void push(int data){
    if(isFull()){
        cout<<"Stack Overflow."<<endl;    
        return;
    }
    top++;
    stack[top] = data;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    top--;
}

int peek(){
    if(!isEmpty())
        return stack[top];
    return INT_MIN;
}

void display(){
    if(isEmpty()){
        cout<<"Stack is empty."<<endl;
        return;
    }
    for(int i=top; i>=0; i--)
        cout<<stack[i]<<endl;
}

int main(){
    cout<<"Welcome to the stack."<<endl;
    int cont = 1;
    int choice = 0;
    while(cont){
        cout<<"Choose an operation: "<<endl;
        cout<<"1. Push\n2. Pop\n3. Peek\n4. exit"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:{
            int data;
            cout<<"Enter a number to push int the stack: ";
            cin>>data;
            push(data);
            display();
            break;
        }
        case 2:{
            pop();
            display();
            break;
        }
        case 3:{
            int peeked = peek();
            cout<<"Number at the top: "<<peeked<<endl;
            break;
        }
        case 4:{
            cont = 0;
            cout<<"Bye!"<<endl;
            break;
        }
        default:
            break;
        }
        
    }
}