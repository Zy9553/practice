#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> p(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        p[a[i]] = i;
    }
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(p[i] > p[i+1]) cnt++;
    }
    cout<<cnt;
    return 0;
}