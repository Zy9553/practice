#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> coin(n);
    for(int i=0; i<n; i++) cin>>coin[i];
    sort(coin.begin(), coin.end());
    long long ans = 1;
    for(int i=0; i<n; i++){
        if(ans < coin[i]) {
            break;
        }
        ans += coin[i];
    }
    cout<<ans;
    return 0;
}