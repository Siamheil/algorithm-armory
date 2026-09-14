class Solution {
public:
    void solve(unordered_map<int,vector<int>>& adj,int u,vector<bool>& visited){
        queue<int>q;
        q.push(u);
        visited[u]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int &v:adj[node]){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
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