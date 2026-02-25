class Solution {
public:
    void bfs(int i,vector<bool>& visited,vector<vector<int>>& isConnected){
        int n=isConnected.size();
        visited[i]=true;
        queue<int>q;
        q.push(i);
        while(q.size()>0){
            int front=q.front();
            q.pop();
            for(int j=0;j<n;j++){
                if(isConnected[front][j]==1 && visited[j]==false){
                    q.push(j);
                    visited[j]=true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(i,visited,isConnected);
                count++;
            }
        }
        return count;
    }
};