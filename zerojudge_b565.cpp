#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        vector<int> mush(n);
        for(int i=0; i<n; i++) cin>>mush[i];
        vector<int> dp(n, 0);
        int t;
        for(int i=0; i<n; i++){
            t = 0;
            for(int j=i; j<n; j++){
                t+=mush[j];
                dp[i] = max(t, dp[i]);
            }
        }
        cout<<*max_element(dp.begin(), dp.end())<<'\n';
    }
}