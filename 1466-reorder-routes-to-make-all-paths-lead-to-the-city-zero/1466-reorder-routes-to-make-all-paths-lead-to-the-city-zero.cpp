class Solution {
public:
    int count=0;
    void dfs(int u,int parent,unordered_map<int,vector<pair<int,int>>> &adj){
        for(auto &p:adj[u]){
            int v=p.first;
            int check=p.second;
            if(v!=parent){
                if(check==1){
                    count++;
                }
                dfs(v,u,adj);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int,vector<pair<int,int>>> adj;
        for(auto &vec:connections){
            int a = vec[0];
            int b = vec[1];
            adj[a].push_back({b,1});
            adj[b].push_back({a,0});
        }
        dfs(0,-1,adj);
        return count;
    }
};