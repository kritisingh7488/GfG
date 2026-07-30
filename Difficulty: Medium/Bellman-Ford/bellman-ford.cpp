class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int> ans(V,1e8);
        ans[src]=0;
        for(int i =0; i<V-1;i++){
            for(int j=0;j<edges.size();j++){
                int u = edges[j][0];
                int v = edges[j][1];
                int w = edges[j][2];
                if(ans[u]!=1e8 && ans[u]+w<ans[v]){
                    ans[v]=ans[u]+w;
                }
            }
        }
        
            for(int j=0;j<edges.size();j++){
                int u = edges[j][0];
                int v = edges[j][1];
                int w = edges[j][2];
                if(ans[u]!=1e8 && ans[u]+w<ans[v]){
                    return {-1};
                }
            }
        
        return ans;
        
    }
};
