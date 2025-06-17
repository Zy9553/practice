#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        if(n == 0) break;
        vector<vector<int>> a(n, vector<int>(4, 0));
        for(int i=0; i<n; i++) cin>>a[i][0];
        a[0][1] = 0;
        a[0][2] = a[0][0];
        a[0][3] = 2 * a[0][0];
        for(int i=1; i<n; i++){
            a[i][1] = max(a[i-1][1], max(a[i-1][2], a[i-1][3]));
            a[i][2] = max(a[i-1][1], a[i-1][2]) +a[i][0];
            a[i][3] = max(a[i-1][2], a[i-1][1]) + 2*a[i][0];
        }
        int ans = max(a[n-1][1], max(a[n-1][2], a[n-1][3]));
        cout<<ans<<'\n';
    }
    return 0;
}