#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long ans = *max_element(a.begin(), a.end());
    long long temp = 0;
    int start = -1;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            if(start == -1) start = i;
            temp += a[i];
            ans = max(temp, ans);
        } else if(temp + a[i] >= 0){
            temp += a[i];
            ans = max(temp, ans);
        }else{
            start = -1;
            temp = 0;
        }
    }
    cout<<ans;
    return 0;
}