#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int s, n, m;
    int cnt = 1;
    while(cin>>s){
        cin>>n>>m;
        vector<vector<int>> water(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>water[i][j];
            }
        }
        vector<vector<bool>> visit(n, vector<bool>(m, false));
        queue<pair<int, int>> q;
        int start;
        for(int j=0; j<m; j++){
            if(water[0][j] == 1) start = j;
        }
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        q.push({0, start});
        visit[0][start] = true;
        int x;
        x = (s==1) ? 4 : 3;
        while(!q.empty()){
            pair<int, int> now = q.front(); q.pop();
            for(int i=0; i<x; i++){
                if(now.second+dx[i]>=0 &&now.second+dx[i]<m && now.first+dy[i]>=0 && now.first+dy[i]<n && water[now.first+dy[i]][now.second+dx[i]] != 0 && !visit[now.first+dy[i]][now.second+dx[i]]){
                    q.push({now.first+dy[i], now.second+dx[i]});
                    visit[now.first+dy[i]][now.second+dx[i]] = true;
                    water[now.first+dy[i]][now.second+dx[i]] = water[now.first][now.second]+1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visit[i][j]) water[i][j] = 0;
            }
        }
        cout<<"Case "<<cnt++<<":\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<water[i][j]<<' ';
            }
            cout<<'\n';
        }
    }
}