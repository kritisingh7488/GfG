/* structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    int s(Node* root,int& mx){
        if(root==NULL){
            return 0;
        }
        int l = s(root->left,mx);
        int r =s(root->right,mx);
        int d = root->data;
        root->data= l+r;
        mx=max(mx,d+l+r);
        return d+l+r;
    }
    int maxSubtreeSum(Node* root) {
        int mx= INT_MIN;
        s(root,mx);
        return mx;
        
    }
};
