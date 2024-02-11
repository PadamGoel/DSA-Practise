#include<iostream>
#include<queue>
#include<vector>
using namespace std;

template<typename T>
class treeNode{
    public:
    T data;
    vector<treeNode*> children;

    treeNode(T data){
        this -> data = data;
    }
};

treeNode<int> *takeInput(){
    int rootData;
    cout << "Enter the root data" << endl;
    cin >> rootData;
    treeNode<int> *root = new treeNode(rootData);

    queue<treeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        treeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "Enter the num of children of " << front -> data << endl;
        cin >> numChild;
        for(int i=0; i<numChild; i++){
            int childData;
            cout << "Enter the " << i << "th child of " << front -> data << endl;
            cin >> childData;
            treeNode<int> *child = new treeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printAtLevelK(treeNode<int> *root, int k){
    if(k == 0){
        cout << root -> data << endl;
        return;
    }
    for(int i=0; i<root ->children.size(); i++){
        printAtLevelK(root -> children[i], k-1);
    }
}

void print(treeNode<int> *root){
    cout << root -> data << ":";
    for(int i=0; i<root -> children.size(); i++){
        cout << root -> children[i] -> data << ",";
    }
    cout << endl;
    for(int i=0; i<root -> children.size(); i++){
        print(root ->children[i]);
    }
}

int main(){
    treeNode<int> *root = takeInput();
    print(root);

    printAtLevelK(root, 3);
}