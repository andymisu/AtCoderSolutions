#include <bits/stdc++.h>
using namespace std;
typedef pair<long long,long long> per;
ifstream fin("file.in");

void djk(vector<vector<per>> g,int n,vector<long long int> dist,long long x){
    priority_queue <per,vector<per>, greater<per>> pq;
    pq.push(make_pair(0,0));
    dist[0] = 0;
    while(!pq.empty()){
        long long u = pq.top().second;
        long long curr_dist = pq.top().first;
        pq.pop();
        if(curr_dist > dist[u]){
            continue;
        }
        for(auto it : g[u]){
            long long v = it.first;
            long long w = it.second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    for(int i = 1; i < n; i++){
        cout<<dist[i] + x<<" ";
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<per>> g(n);
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    for(int i = 0 ; i < m; i++){
        long long x,y,val;
        cin>>x>>y>>val;
        g[x-1].push_back({y-1,val + v[y-1]});
        g[y-1].push_back({x-1,val + v[x-1]});
    }
    vector<long long int> dist(n,1e17);
    djk(g,n,dist,v[0]);

    return 0;
}
