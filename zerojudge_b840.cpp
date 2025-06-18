#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        vector<vector<int>> farm(n+1, vector<int>(n+1));
        for(int i=1 ;i<=n; i++){
            for(int j=1; j<=n; j++) cin>>farm[i][j];
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                farm[i][j] += farm[i-1][j] + farm[i][j-1] - farm[i-1][j-1];
            }
        }
        int maxi = INT_MIN;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                for(int k = 0; k<i; k++){
                    for(int l=0; l<j; l++){
                        maxi = max(maxi, (farm[i][j] - farm[i][l] - farm[k][j] + farm[k][l]));
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
}