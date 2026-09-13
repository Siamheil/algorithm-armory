class Solution {
public:
    void solve(unordered_map<int,vector<int>>& adj,int u,vector<bool>& visited){
        visited[u]=true;
        for(int &v:adj[u]){
            if(!visited[v]){
                visited[v]=true;
                solve(adj,v,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& graph) {
        int n=graph.size();
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<bool>visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                solve(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};