#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        vector<int> dp(n+1);
        dp[1] = 1;
        for(int i=2; i<n+1; i++){
            dp[i] = i*i+dp[i-1];
        }
        cout<<dp[n]<<'\n';
    }
    return 0;
}