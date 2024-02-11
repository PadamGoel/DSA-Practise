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

BinaryTreeNode<int> *takeInput(){
    int rootData;
    cout << "Enter the root data" << endl;
    cin >> rootData;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int leftChild;
        cout << "Enter the left child of " << front -> data << endl;
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

int numNodes(BinaryTreeNode<int> *root){
    if(root == NULL){
        return 0;
    }

    return 1 + numNodes(root -> left) + numNodes(root -> right);
}

void Inorder(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);

    return;
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

int main(){
    BinaryTreeNode<int> *root = takeInput();
    print(root);

    cout << numNodes(root) << endl;

    Inorder(root);
}