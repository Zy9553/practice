#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    while(cin>>n>>m){
        vector<vector<int>> route(n+1, vector<int>());
        int start, end, a, b;
        for(int i=0; i<m; i++){
            cin>>start>>end;
            route[start].push_back(end);
        }
        cin>>a>>b;
        queue<int> q;
        vector<bool> visited(n+1, false);
        q.push(a);
        visited[a] = true;
        int flag = 0;
        while(!q.empty() && flag == 0){
            int now = q.front(); q.pop();
            if(now == b){
                flag = 1;
                break;
            }
            for(int next : route[now]){
                if(!visited[next]){
                    q.push(next);
                    visited[next] = true;
                }
            }
        }
        if(flag == 1){
            cout<<"Yes!!!\n";
        }else{
            cout<<"No!!!\n";
        }
    }
    return 0;
}
