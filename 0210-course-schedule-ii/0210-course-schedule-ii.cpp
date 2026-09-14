class Solution {
public:
    void topologicalSortCheck(unordered_map<int,vector<int>>& adj,int n,vector<int>& inDegree,int &count,vector<int>& ans){
        queue<int>q;
        for(int i=0;i<n;i++){
            if(inDegree[i]==0){
                count++;
                q.push(i);
                ans.push_back(i);
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto &v:adj[u]){
                inDegree[v]--;
                if(inDegree[v]==0){
                    count++;
                    ans.push_back(v);
                    q.push(v);
                }
            }
        }
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<int>inDegree(numCourses,0);
        for(auto &vec:prerequisites){
            int a=vec[0];
            int b=vec[1];
            adj[b].push_back(a);
            inDegree[a]++;
        }
        int count=0;
        vector<int>ans;
        topologicalSortCheck(adj,numCourses,inDegree,count,ans);
        if(count!=numCourses) return {};
        else return ans;
    }
};