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

BinaryTreeNode<int> *findNode(BinaryTreeNode<int> *root, int s){
    if(root == NULL){
        return NULL;
    }
    else if (s == root -> data)
    {
        return root;
    }
    else if (s < root -> data)
    {
        return findNode(root -> left, s);
    }
    else{
        return findNode(root -> right, s);
    }
}

void printBetweenK1K2(BinaryTreeNode<int> *root, int k1, int k2){
    if(root == NULL){
        return;
    }
    if(root -> data >= k1 && root -> data <= k2){
        cout << root -> data << endl;
    }
    if(root -> data > k1){
        printBetweenK1K2(root -> left, k1,k2);
    }
    if(root -> data <= k2){
        printBetweenK1K2(root -> right ,k1,k2);
    }
}

int maximum(BinaryTreeNode<int> *root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(root -> data, max(maximum(root -> left), maximum(root -> right)));
}

int minimum(BinaryTreeNode<int> *root){
    if(root == NULL){
        return INT_MAX;
    }
    return min(root -> data, min(minimum(root -> left), minimum(root -> right)));
}

bool isBST(BinaryTreeNode<int> *root){
    if(root == NULL){
        return true;
    }

    int leftMax = maximum(root -> left);
    int rightMin = minimum(root -> right);
    bool output = (root -> data > leftMax) && (root -> data <= rightMin) && isBST(root -> left) && isBST(root -> right);
    return output;
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

    int s;
    cin >> s;
    BinaryTreeNode<int> *search = findNode(root, s);
    cout << search -> data << endl;

    printBetweenK1K2(root,2,6);

    cout << isBST(root) << endl;
}