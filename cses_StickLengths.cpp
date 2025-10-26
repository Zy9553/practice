#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> stick(n);
    for(int i=0; i<n; i++) cin>>stick[i];
    sort(stick.begin(), stick.end());
    long long ans = 0;
    long long target;
    if(n%2 == 1){
        target = stick[n/2];
    }else{
        target = (stick[n/2-1] + stick[n/2])/2;
    }
    for(int i=0; i<n; i++){
        ans += llabs(stick[i] - target);
    }
    cout<<ans;
    return 0;
}