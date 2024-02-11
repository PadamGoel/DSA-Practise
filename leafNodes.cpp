#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> children;

    TreeNode(T data){
        this -> data = data;
    }
};

TreeNode<int> *takeInput(){
    int rootData;
    cout << "Enter the root data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "Enter the num of children of " << front -> data << endl;
        cin >> numChild;
        for(int i=0; i<numChild; i++){
            int childData;
            cout << "Enter the " << i << "th child of " << front -> data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }    
    return root;
}

int numNode(TreeNode<int> *root){
    int ans = 1;
    for(int i=0; i<root -> children.size(); i++){
        ans += numNode(root->children[i]);
    }
    return ans;
}

int calculateHeight(TreeNode<int> *root){
    int maxHeight = 0;
    for(int i=0; i<root -> children.size(); i++){
        int height = calculateHeight(root->children[i]);
        if(height > maxHeight){
            maxHeight = height;
        }
    } 
    return 1 + maxHeight;
}

void printAtLevelK(TreeNode<int> *root, int k){
    if(k == 0){
        cout << root -> data << endl;
        return;
    }
    for(int i=0; i<root->children.size(); i++){
        printAtLevelK(root -> children[i], k-1);
    }
}

int calculateLeafNode(TreeNode<int> *root){
    int ans = 0;
    for(int i=0; i<root->children.size(); i++){
        int num = calculateLeafNode(root->children[i]);     
        ans += num; 
    }
    if(root -> children.size() == 0){
        return 1;
    }
    return ans;
}

void print(TreeNode<int> *root){
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        
    }
}