#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main(){
    int n, x;
    cin>>n>>x;
    set<int> coin;
    for(int i=0; i<n; i++){
        int c;
        cin>>c;
        coin.insert(c);
    }
    vector<int> dp(x+1, INF);
    dp[0] = 0;
    for(int i=1; i<=x; i++){
        if(coin.count(i)){
            dp[i] = 1;
            continue;
        }
        for(int c : coin){
            if(i-c >= 0){
                dp[i] = min(dp[i], dp[i-c]+1);
            }
        }
    }
    if(dp[x] == INF) cout<<-1;
    else cout<<dp[x];
    return 0;
}