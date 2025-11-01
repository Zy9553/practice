#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> p(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        p[a[i]] = i;
    }
    auto bad = [&](int x) -> int {
        if(x<1 || x >= n) return 0;
        return p[x] > p[x+1];
    };
    int breaks = 0;
    for(int x=1; x<n; x++){
        breaks += bad(x);
    }
    while(m--){
        int i, j;
        cin>>i>>j;
        if(i == j){
            cout<<breaks+1<<'\n';
            continue;
        }
        int v = a[i];
        int w = a[j];
        vector<int> cand = {v-1, v, w-1, w};
        sort(cand.begin(), cand.end());
        cand.erase(unique(cand.begin(), cand.end()), cand.end());
        for(int k : cand){
            breaks -= bad(k);
        }
        swap(a[i], a[j]);
        p[v] = j;
        p[w] = i;
        for(int k : cand) breaks += bad(k);
        cout<<breaks+1<<'\n';
    }
    return 0;
}