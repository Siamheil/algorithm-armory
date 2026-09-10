class Solution {
  public:
    void BFS(vector<vector<int>> &adj,int u,vector<bool>& visited,vector<int>& result){
        queue<int>q;
        q.push(u);
        visited[u]=true;
        result.push_back(u);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int &v:adj[u]){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                    result.push_back(v);
                }
            }
        }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
        int v=adj.size();
        vector<bool>visited(v,false);
        vector<int>result;
        BFS(adj,0,visited,result);
        return result;
    }
};