#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> children(n,0);
    for(int i=0; i<n; i++) cin>>children[i];
    int cnt = 0;
    sort(children.begin(), children.end());
    int i=0, j=n-1;
    while(i <= j){
        if(children[i] + children[j] > x){
            cnt++;
            j--;
        }else{
            cnt++;
            i++; j--;
        }
    }
    cout<<cnt;
    return 0;
}