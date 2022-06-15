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

class BinaryTree {
    public:
        Node *root;

        BinaryTree(/* args */){
            this->root = NULL;
        };
        Node *addNode(Node *current, int data, bool isRight){
            Node *newNode = new Node(data);
            if(current == NULL){
                this->root = newNode;
            }else{
                if(isRight)
                    current->right = newNode;
                else 
                    current->left = newNode;
            }
            return newNode;
        }

        void inOrderTraversal(Node *root){
            if(root == NULL) return;
            inOrderTraversal(root->left);
            cout<<root->data<<" ";
            inOrderTraversal(root->right);
        }
        void preOrder(Node *root){
            if(root == NULL) return;
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
        }
        void postOrder(Node *root){
            if(root == NULL) return;
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
            // postOrder(root);
        }
};

int main(){
    BinaryTree myTree;
    Node *root = myTree.addNode(NULL, 1, false);
    Node *leftChild = myTree.addNode(root, 2, false);
    Node *rightChild = myTree.addNode(root, 7, true);
    Node *leftSibling = myTree.addNode(leftChild, 5, false);
    Node *rightSibling = myTree.addNode(leftChild, 4, true);
    Node *rightSibling1 = myTree.addNode(rightSibling, 6, false);
    Node *rightLeftSib = myTree.addNode(rightChild, 9, false);
    Node *rightRightSib = myTree.addNode(rightChild, 10, true);
    Node *rightFSib = myTree.addNode(leftSibling, 3, true);
    Node *rightRightSib3 = myTree.addNode(rightLeftSib, 11, true);
    Node *rightRightSib4 = myTree.addNode(rightRightSib, 3, false);
    Node *rightRightSib5 = myTree.addNode(rightRightSib, 15, true);

    myTree.inOrderTraversal(root);
    cout<<endl;
    myTree.preOrder(root);
    cout<<endl;
    myTree.postOrder(root);
}