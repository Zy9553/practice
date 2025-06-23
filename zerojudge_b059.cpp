#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        vector<vector<int>> arr(100,vector<int>(100, -1));
        int dog1, dog2;
        
        int a, b;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            arr[a][b] = -2;
        }
        cin>>dog1>>dog2;
        arr[dog1][dog2] = 0;
        int dx[8] = {1, -1, -3, -3, -1, 1, 3, 3};
        int dy[8] = {3, 3, 1, -1, -3, -3, -1, 1};
        int ox[8] = {0, 0, -1, -1, 0, 0, 1, 1};
        int oy[8] = {1, 1, 0, 0, -1, -1, 0, 0};
        int treasure1, treasure2;
        cin>>treasure1>>treasure2;
        queue<pair<int, int>> q;
        q.push({dog1, dog2});
        bool flag = false;
        while(!q.empty()){
            pair<int, int> now = q.front(); q.pop();
            if(now.first == treasure1 && now.second == treasure2){
                cout<<arr[now.first][now.second]<<'\n';
                flag = true;
                break;
            }
            for(int i=0; i<8; i++){
                if(now.first + ox[i]>=0&&now.first + ox[i]<=99&&now.second + oy[i]>=0&&now.second + oy[i]<=99&&arr[now.first + ox[i]][now.second + oy[i]] != -2){
                    if(now.first + dx[i]>=0&&now.first + dx[i]<=99&&now.second + dy[i]>=0&&now.second + dy[i]<=99 && arr[now.first + dx[i]][now.second + dy[i]] == -1){
                        q.push({now.first + dx[i], now.second + dy[i]});
                        arr[now.first + dx[i]][now.second + dy[i]] = arr[now.first][now.second] + 1;
                    }
                }
            }
        }
        if(!flag){
            cout<<"impossible\n";
        }
    }
}