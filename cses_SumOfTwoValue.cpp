#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    vector<pair<int, int>> arr(n);
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        arr[i] = {val, i+1};
    }
    sort(arr.begin(), arr.end());
    int left = 0, right = n-1;
    while(left<right){
        int now = arr[left].first+arr[right].first;
        if(now == x){
            if(arr[left].second > arr[right].second) swap(arr[left].second, arr[right].second);
            cout<<arr[left].second<<' '<<arr[right].second;
            return 0;
        }else if(now < x){
            left++;
        }else right--;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}