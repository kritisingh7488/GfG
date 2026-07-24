/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void ino(Node* root, vector<int>& v){
        if(root==NULL) return;
        ino(root->left,v);
        v.push_back(root->data);
        ino(root->right,v);
    }
    int minValue(Node* root) {
        vector<int> v;
        ino(root,v);
        return v[0];
    }
};