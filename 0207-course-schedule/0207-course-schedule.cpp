class Solution {
public:
    bool topologicalSortCheck(unordered_map<int,vector<int>>& adj,int n,vector<int>& inDegree){
        queue<int>que;
        int count=0;
        for(int i=0;i<n;i++){
            if(inDegree[i]==0){
                count++;
                que.push(i);
            }
        }
        while(!que.empty()){
            int u=que.front();
            que.pop();
            for(auto &v:adj[u]){
                inDegree[v]--;
                if(inDegree[v]==0){
                    que.push(v);
                    count++;
                }
            }
        }
        return count==n;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<int>inDegree(numCourses,0);
        for(auto &vec:prerequisites){
            int a=vec[0];
            int b=vec[1];
            adj[b].push_back(a);
            inDegree[a]++;
        }
        return topologicalSortCheck(adj,numCourses,inDegree);
    }
};