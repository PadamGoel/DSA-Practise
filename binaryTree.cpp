#include<iostream>
#include<vector>
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

void print(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    cout << root -> data << ": ";
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

BinaryTreeNode<int> *takeInput(){
    int rootData;
    cout << "Enter the data" << endl;
    cin >> rootData;
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root -> left = leftChild;
    root -> right = rightChild;

    return root;
}

int main(){
    /*BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);

    root -> left = node1;
    root -> right = node2;
    */
    BinaryTreeNode<int> *root = takeInput();
    print(root);
}