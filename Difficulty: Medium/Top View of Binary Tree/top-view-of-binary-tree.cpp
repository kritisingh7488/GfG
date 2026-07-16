/* 
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
    vector<int> topView(Node *root) {
        vector<int> ans;
        // Edge case: empty tree
        if (root == nullptr) {
            return ans;
        }

        // Map to store the first node at each horizontal distance
        map<int, int> mp; 
        
        // Queue to store pair of Node and its horizontal distance
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while (!q.empty()) {
            auto f = q.front(); 
            q.pop();
            
            Node* n = f.first;
            int idx = f.second;
            
           
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
        
       
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
