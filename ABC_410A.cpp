#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> horse(n);
    for(int i=0; i<n; i++) cin>>horse[i];
    int k;
    cin>>k;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(k<=horse[i]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}