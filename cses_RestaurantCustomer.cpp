#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> p;
    for(int i=0; i<n; i++){
        int a, l;
        cin>>a>>l;
        p.push_back({a, 1});
        p.push_back({l, -1});
    }
    sort(p.begin(), p.end());
    int maxp = 0;
    int in = 0;
    for(pair<int, int> now : p){
        int person = now.second;
        in += person;
        maxp = max(maxp, in);
    }
    cout<<maxp;
    return 0;
}