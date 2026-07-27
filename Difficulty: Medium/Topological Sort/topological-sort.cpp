class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
      
        
        vector<vector<int>> adj(V);
        vector<int> indegree(V, 0);

        
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int> q;
        for(int i =0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            ans.push_back(f);
            for(int i =0; i<adj[f].size();i++){
                indegree[adj[f][i]]--;
                if(indegree[adj[f][i]]==0){
                    q.push(adj[f][i]);
                }
            }
        }
        if(ans.size() != V) return {};
        return ans;
        
    }
};