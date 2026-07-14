/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void pre(Node* root, vector<int>& c){
        if(root==NULL){
            return;
        }
        c.push_back(root->data);
        pre(root->left,c);
        pre(root->right,c);
    }
    vector<int> preOrder(Node* root) {
        vector<int> c;
        pre(root,c);
        return c;
        
    }
};