/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void ino(Node* root, vector<int>&v){
        if(root==NULL) return;
        ino(root->left,v);
        v.push_back(root->data);
        ino(root->right,v);
    }
    vector<int> merge(Node *root1, Node *root2) {
        vector<int> v1,v2;
        ino(root1,v1);
        ino(root2,v2);
        int m= v1.size();
        int n = v2.size();
        int i=0;
        int k =0;
        int j=0;
        vector<int>mer(m+n);
        while(i<m && j<n){
            if(v1[i]<v2[j]){
                mer[k]=v1[i];
                k++;
                i++;
            }
            else{
                mer[k]=v2[j];
                k++;
                j++;
            }
        }
        while(i<m){
            mer[k++]=v1[i++];
        }
        while(j<n){
            mer[k++]=v2[j++];
        }
        
        return mer;
    }
};