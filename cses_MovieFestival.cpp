#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> p;
    for(int i=0; i<n; i++){
        int s, e;
        cin>>s>>e;
        p.push_back({s, e});
    }
    sort(p.begin(), p.end());
    int cnt = 0;
    int lastend = 0;
    for(pair<int, int>now : p){
        int start = now.first;
        int end = now.second;
        if(start >= lastend){
            cnt++;
            lastend = end;
        }else if(start < lastend && end <= lastend){
            lastend = end;
        }
    }
    cout<<cnt;
    return 0;
}