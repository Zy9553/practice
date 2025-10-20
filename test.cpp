#include <bits/stdc++.h>

using namespace std;
int t;
int n, a, b;

bool sym(vector<char>& board){
    int left = 0;
    int right = board.size();
    while(left<=right){
        if(board[left]!=board[right]){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        bool ans = false;
        cin>>n>>a>>b;
        vector<char> board(n);
        for(int i=0; i<n; ++i) board[i] = 'w';
        int temp1 = (n-a)/2;
        for(int i=0; i<a; ++i) board[temp1+i] = 'r';
        int temp2 = (n-b)/2;
        for(int i=0; i<b; ++i) board[temp2+i] = 'b';
        ans = sym(board);
        for(int i=0; i<n; i++) cout<<board[i]<<' ';
        cout<<'\n';
        //if(ans) cout<<"YES\n";
        //else cout<<"NO\n";
    }
    return 0;
}