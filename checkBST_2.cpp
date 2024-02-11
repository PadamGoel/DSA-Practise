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

        int rightChild;
        cout << "Enter the right child of " << front -> data << endl;
        cin >> rightChild;
        if(rightChild != -1){
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChild);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

class IsBSTReturn{
    public:
    bool isBST;
    int minimum;
    int maximum;
};

IsBSTReturn isBST2(BinaryTreeNode<int> *root){
    if(root == NULL){
        IsBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    IsBSTReturn leftOutput = isBST2(root -> left);
    IsBSTReturn rightOutput = isBST2(root -> right);
    int minimum = min(root -> data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root -> data, max(leftOutput.maximum, rightOutput.maximum));
    bool isBSTFinal = (root -> data > leftOutput.maximum) && (root -> data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;

    IsBSTReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;
    return output;
}