class Solution {
  public:
    vector<bool> vi;
    bool dfs(vector<vector<int>>& edges, int n, int parent){
        vi[n]=1;
        for(auto adjacent: edges[n]){
            if(!vi[adjacent]){
                if(dfs(edges,adjacent,n)) return true;
            }
            else{
                if(parent!=adjacent){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);
        for(auto x : edges) {

            int a = x[0];
            int b = x[1];

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        vi.assign(V, false);

        for(int i = 0; i < V; i++) {

            if(!vi[i]) {

                if(dfs(adj, i, -1))
                    return true;
            }
        }

        return false;
    }
    
};
