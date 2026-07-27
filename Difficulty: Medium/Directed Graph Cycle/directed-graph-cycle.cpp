class Solution {
public:
    vector<bool> vis;

    bool dfs(vector<vector<int>>& adj, int node, vector<bool>& psf) {

        vis[node] = 1;
        psf[node] = 1;

        for(auto n : adj[node]) {

            if(!vis[n]) {

                if(dfs(adj, n, psf))
                    return true;
            }
            else {

                if(psf[n]==1)
                    return true;
            }
        }

        psf[node] = false;

        return false;
    }

    bool isCyclic(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        for(auto x : edges) {
            adj[x[0]].push_back(x[1]);
        }

        vis.assign(V, false);
        vector<bool> psf(V, false);

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {

                if(dfs(adj, i, psf))
                    return true;
            }
        }

        return false;
    }
};