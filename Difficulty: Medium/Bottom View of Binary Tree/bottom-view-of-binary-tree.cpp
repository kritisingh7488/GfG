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
    vector<int> bottomView(Node *root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto f = q.front();
            q.pop();
            Node* n= f.first;
            int idx=f.second;
            mp[idx] = n->data;
             if (mp.find(idx) == mp.end()) {
                mp[idx] = n->data;
            }
            
           
            if (n->left) {
                q.push({n->left, idx - 1});
            }
            
           
            if (n->right) {
                q.push({n->right, idx + 1});
            }
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
    }
};