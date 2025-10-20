#include <bits/stdc++.h>

using namespace std;
int t;
long long n, a, b;



int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        bool ans = false;
        cin>>n>>a>>b;
        ans = (n-b)%(long long)2==0 && ((n-a)%(long long)2 ==0 || a<b);
        if(ans) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}