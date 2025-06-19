#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        int startr, startc, endr, endc;
        cin>>n>>m>>startr>>startc>>endr>>endc;
        startr--; startc--;
        endr--; endc--;
        string s;
        vector<vector<int>> maps(n, vector<int>(m));
        for(int i=0; i<n; i++){
            cin>>s;
            for(int j=0; j<m; j++){
                maps[i][j] = s[j]-'0';
            }
        }
        vector<vector<int>> visited(n,vector<int>(m, -1));
        int x[4] = {0, 0, -1, 1};
        int y[4] = {-1, 1, 0, 0};
        queue<pair<int, int>> q;
        q.push({startr, startc});
        visited[startr][startc] = 1;
        while(!q.empty()){
            pair<int, int> now;
            now = q.front(); q.pop();
            int nowx = now.first;
            int nowy = now.second;
            for(int i=0; i<4; i++){
                if((nowx + x[i]) >=0 && (nowx + x[i]) <n && (nowy + y[i])>=0 && (nowy+y[i]) < m){
                    if(maps[nowx+x[i]][nowy+y[i]] == 0 && visited[nowx+x[i]][nowy+y[i]] == -1){
                        q.push({(nowx+x[i]), (nowy+y[i])});
                        visited[nowx+x[i]][nowy+y[i]] = visited[nowx][nowy]+1;
                    }
                }
            }
        }
        if(visited[endr][endc] == -1){
            cout<<0<<'\n';
        }else{
            cout<<visited[endr][endc]<<'\n';
        }
    }
    return 0;
}