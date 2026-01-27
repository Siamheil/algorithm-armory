class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);
        adj.reserve(n);

        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, 2 * w});
        }
        const int INF = 1e9;
        vector<int> dist(n, INF);
        dist[0] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (u == n - 1)  
                return d;
            if (d != dist[u])  
                continue;

            for (auto [v, w] : adj[u]) {
                if (dist[u] + w < dist[v]) {  
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        return -1;
    }
};