#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, cnt=0;
    cin>>t;
    int a, b;
    while(t--){
        if(cnt) cout<<"------\n";
        cnt++;
        cin>>a>>b;
        if(a>b) swap(a,b);
        vector<int> fib;
        fib.push_back(0);
        fib.push_back(1);
        int answer = 0;
        for(int i=0;fib[i]<=b; i++){
            if(fib[i]>=a){
                answer++;
                cout<<fib[i]<<'\n';
            }
            fib.push_back(fib[i]+fib[i+1]);
        }
        cout<<answer<<'\n';
    }
    return 0;
}