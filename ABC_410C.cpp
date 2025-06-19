#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a;
    int q;
    cin>>a>>q;
    vector<int> arr(a);
    int query;
    int off = 0;
    for(int i=0; i<a; i++) arr[i] = i+1;
    while(q--){
        cin>>query;
        if(query == 1){
            int p;
            int x;
            cin>>p>>x;
            p--;
            arr[(off+p)%a] = x;
        }
        else if(query == 2){
            int p;
            cin>>p;
            p--;
            cout<<arr[(off+p)%a]<<endl;
        }else if(query == 3){
            int k;
            cin>>k;
            off = (off+k)%a;
        }
    }
}