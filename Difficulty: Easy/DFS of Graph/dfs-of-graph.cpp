class Solution {
  public:
    void dfs(vector<vector<int>>& adj,int u,vector<bool>& visited,vector<int>& ans){
        if(visited[u]) return;
        visited[u]=true;
        ans.push_back(u);
        for(int &v:adj[u]){
            if(!visited[v]){
                dfs(adj,v,visited,ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int v=adj.size();
        vector<bool>visited(v,false);
        vector<int>ans;
        dfs(adj,0,visited,ans);
        return ans;
    }
};