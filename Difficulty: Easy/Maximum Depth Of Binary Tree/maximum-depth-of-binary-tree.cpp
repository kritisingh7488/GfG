/* The Node structure is
class Node {
public:
    int data;
    Node* left;
    Node* right;

};
}; */

class Solution {
  public:
    int maxDepth(Node *root) {
       if(root==NULL){
           return 0;
       }
       int l=maxDepth(root->left);
       int r = maxDepth(root->right);
       return max(l,r)+1;
       
    }
};
