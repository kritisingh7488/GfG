class Solution {
  public:
    vector<bool> vi;
    bool bfs(vector<vector<int>>& edges, int n, int parent){
        queue<pair<int,int>> q;
        q.push({n,-1});
        vi[n]=1;
        while(!q.empty()){
            int parent=q.front().second;
            int node=q.front().first;
            q.pop();
            for(int adji: edges[node]){
                if(!vi[adji]){
                    vi[adji]=1;
                    q.push({adji,node});
                }
                else{
                    if(parent!=adji) return true;
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

                if(bfs(adj, i, -1))
                    return true;
            }
        }

        return false;
    }
    
};
