#include <bits/stdc++.h>

using namespace std;

int dfs(char start, unordered_map<char, vector<pair<char, int>>>& graph, unordered_map<char, int>& me){
    if(me.count(start)) return me[start];
    int maxweight = 0;
    for(int i=0; i<graph[start].size(); i++){
        maxweight = max(maxweight, graph[start][i].second + dfs(graph[start][i].first, graph, me));
    }
    me[start] = maxweight;
    return maxweight;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    char start;
    cin>>start;
    int n;
    cin>>n;
    unordered_map<char,vector<pair<char, int>>> graph;
    unordered_map<char, int> me;
    char u, v;
    int w;
    for(int i=0; i<n; i++){
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
    }
    int ans = dfs(start, graph, me);
    cout<<ans<<'\n';
}