#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> a;
    int b;
    for(int i=0; i<n; i++){
        cin>>b;
        if(!a.count(b)) a.insert(b); 
    }
    cout<<a.size();
    return 0;
}