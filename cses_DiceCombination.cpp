#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        long long cnt = 0;
        for(int d=1; d<=6 && i-d>=0; d++){
            cnt += dp[i-d];
            cnt %= 1000000007;
        }
        dp[i] = (int)cnt;
    }
    cout<<dp[n];
    return 0;
}