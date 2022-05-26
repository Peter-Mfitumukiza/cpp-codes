#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct Node{
    int value;
    Node *parent;
    vector<Node *> children;
};

Node *addNode(Node *parent, int value){
    Node *newNode = new Node();
    newNode->value = value;
    newNode->parent = parent;

    if(parent != NULL){
        parent->children.push_back(newNode);
    }
    
    return newNode;
}

void BFS_display(Node *root){
	list<Node*> que;
	que.push_back(root);
	while(!que.empty()){
		
		int size = que.size();
		while(size > 0){
			Node *current = que.front();
			cout<<current->value<<" ";
			for(auto i:current->children){
				que.push_back(i);
			}
			size --;
			que.pop_front();
		}
		cout<<endl<<endl;
	}
}

int main(){
    Node *root = addNode(NULL,4);
    Node *firstChild = addNode(root, 3);
    Node *secondChild = addNode(root, 5);
    Node *thirdChild = addNode(root, 10);
    Node *firstSibling = addNode(firstChild, 7);
    Node *secondSibling = addNode(firstChild, 8);
    Node *thirdSibling = addNode(secondChild, 9);
    cout<<"\n";
    BFS_display(root);
    return 0;
}