#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int> *takeInputLevelWise(){
    int rootData;
    cout << "Enter the root data" << endl;
    cin >> rootData;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of " << front -> data << endl;
        int leftChild;
        cin >> leftChild;
        if(leftChild != -1){
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChild);
            front -> left = child;
            pendingNodes.push(child);
        }
        cout << "Enter right child of " << front -> data << endl;
        int rightChild;
        cin >> rightChild;
        if(rightChild != -1){
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChild);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void print(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " : ";
    if(root -> left != NULL){
        cout << "L" << root -> left -> data << ",";
    }
    if(root -> right != NULL){
        cout << "R" << root -> right -> data;
    }
    cout << endl;
    print(root -> left);
    print(root -> right);
}