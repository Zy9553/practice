#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        vector<long long> dp(n+1);
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        cout<<dp[n]<<'\n';
    }
    return 0;
}