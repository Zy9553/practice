#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int r, c;
    int casenum = 1;
    while(cin>>r>>c){
        vector<vector<int>> route(r, vector<int>(c, 0));
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++) cin>>route[i][j];
        }
        vector<vector<int>> dp(r, vector<int>(c, 0));
        dp[0][0] = 0;
        for(int i=1; i<r; i++) dp[i][0] = route[i][0]+dp[i-1][0];
        for(int i=1; i<c; i++) dp[0][i] = route[0][i]+dp[0][i-1];
        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++) dp[i][j] = route[i][j]+min(dp[i-1][j], dp[i][j-1]);
        }
        cout<<"Case #"<<casenum++<<" : \n";
        cout<<dp[r-1][c-1]<<'\n';
    }
}