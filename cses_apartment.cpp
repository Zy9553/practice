#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> desire(n);
    vector<int> room(m);
    vector<bool> empty(m, true);
    for(int i=0; i<n; i++) cin>>desire[i];
    for(int i=0; i<m; i++) cin>>room[i];
    sort(room.begin(), room.end());
    sort(desire.begin(), desire.end());
    int i=0, j=0, cnt = 0;
    while(i<n && j<m){
        if(desire[i] - room[j] > k) j++;
        else if(room[j] - desire[i] > k) i++;
        else{
            cnt++, j++, i++;
        }
    }
    cout<<cnt;
}