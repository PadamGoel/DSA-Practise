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

bool isBST3(BinaryTreeNode<int> *root, int min = INT_MIN, int max = INT_MAX){
    if(root == NULL){
        return true;
    }
    if(root -> data < min || root -> data > max){
        return false;
    }
    bool isLeftOk = isBST3(root -> left, min, root -> data -1);
    bool isRightOk = isBST3(root -> right, root -> data, max);
    return isLeftOk && isRightOk;
}