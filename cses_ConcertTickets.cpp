#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    multiset<long long> ticket;
    vector<long long> cus(m);
    for(int i=0; i<n; i++){
        long long b;
        cin>>b;
        ticket.insert(b);
    }
    for(int i=0; i<m; i++){
        long long a;
        cin>>a;
        auto it = ticket.upper_bound(a);
        if(it == ticket.begin()){
            cout<<-1<<'\n';
            continue;
        }
        --it;
        cout<<*it<<'\n';
        ticket.erase(it);
    }
    return 0;
}