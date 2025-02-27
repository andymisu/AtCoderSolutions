#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

struct Edge {
    long long to, cost, type;
};

void bfs(long long start, const vector<vector<Edge>>& graph, vector<long long>& sol) {
    queue<long long> q;
    vector<bool> visited(graph.size(), false);
    q.push(start);
    visited[start] = true;
    sol[start] = 0;

    while (!q.empty()) {
        long long node = q.front();
        q.pop();

        for (const auto& edge : graph[node]) {
            long long next_node = edge.to;
            long long cost = edge.cost;
            long long type = edge.type;

            if (!visited[next_node]) {
                if (type == 1) {
                    sol[next_node] = sol[node] + cost;
                } else {
                    sol[next_node] = sol[node] - cost;
                }
                visited[next_node] = true;
                q.push(next_node);
            }
        }
    }
}



int main() {
    long long n,m;
    cin>>n>>m;
    vector<vector<Edge>> edges(n);
    for(long long i = 0; i < m; i++){
        long long x,y,cost;
        cin>>x>>y>>cost;
        x--;
        y--;
        edges[x].push_back({y,cost,1});
        edges[y].push_back({x,cost,-1});
    }
    vector<long long> sol(n,INT_MAX);
    for(long long i = 0; i < n; i++){
        if(sol[i] == INT_MAX){
            bfs(i,edges,sol);
        }
    }
    for(long long i = 0; i < n; i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}
