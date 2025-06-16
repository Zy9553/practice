#include <bits/stdc++.h>

using namespace std;

int t;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    while(cin>>t){
        vector<long long> dp(t+1);
        dp[1] = 1; dp[2] = 2;
        for(int i=3; i<=t; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        cout<<dp[t]<<'\n';
    }
    return 0;
}