#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, q;
    cin>>n>>q;
    vector<int> box(n+1);
    vector<int> ball(q);
    vector<int> m(n+1);
    for(int i=0; i<q; i++) cin>>ball[i];
    for(int i=0; i<q; i++){
        if(ball[i] >= 1){
            box[ball[i]]++;
            m[i] = ball[i];
        }else{
            int minn = *min_element(box.begin()+1, box.end());
            for(int j=1; j<=n; j++){
                if(minn == box[j]) {
                    box[j]++;
                    m[i] = j;
                    break;
                }
            }
        }
    }
    for(int i=0; i<q; i++){
        cout<<m[i]<<' ';
    }
    return 0;
}