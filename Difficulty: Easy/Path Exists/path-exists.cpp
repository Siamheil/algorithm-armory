class Solution {
  public:
    void bfs(int src,vector<vector<int>>& adj,vector<bool>& visited){
        queue<int>q;
        q.push(src);
        while(q.size()>0){
            int front=q.front();
            q.pop();
            for(int ele:adj[front]){
                if(!visited[ele]){
                    q.push(ele);
                    visited[ele]=true;
                }
            }
        }
    }
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
        if(src==dest) return true; 
        vector<vector<int>>adj;
        for(int i=0;i<V;i++){
            vector<int>list;
            adj.push_back(list);
        }
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<bool>visited(V,false);
        bfs(src,adj,visited);
        return visited[dest];
    }
};
