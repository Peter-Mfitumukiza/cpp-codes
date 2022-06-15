#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

class BinarySearchTree{
    public:
        Node *root;
        BinarySearchTree(){
            this->root = NULL;
        };
        void inOrderTraversal(Node *root){
            if(root == NULL) return;
            inOrderTraversal(root->left);
            cout<<root->data<<" ";
            inOrderTraversal(root->right);
        }
        Node *addNode(Node *root, int value){
            if(root == NULL)
                root = new Node(value);
            else{
                if(value < root->data)
                    root->left = addNode(root->left, value);
                else if(value > root->data)
                    root->right = addNode(root->right, value);
            }
            return root;
        }
};

int main(){
    BinarySearchTree mytree;
    Node *root = mytree.addNode(NULL, 10);
    mytree.addNode(root, 70);
    mytree.addNode(root, 5);
    mytree.addNode(root, 4);
    mytree.addNode(root, 9);
    mytree.addNode(root, 50);
    mytree.addNode(root, 100); 
    mytree.addNode(root, 2);
    mytree.addNode(root,1);
    mytree.addNode(root, 40);
    mytree.addNode(root, 60);
    mytree.addNode(root, 80);

    mytree.inOrderTraversal(root);
}