class Solution {
  public:

    void solve(unordered_map<int, vector<int>>& adj, int u,
               vector<bool>& visited, stack<int>& st) {

        visited[u] = true;

        for(int v : adj[u]) {
            if(!visited[v]) {
                solve(adj, v, visited, st);
            }
        }

        st.push(u);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        unordered_map<int, vector<int>> adj;

        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
        }

        vector<bool> visited(V, false);
        stack<int> st;

        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                solve(adj, i, visited, st);
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};