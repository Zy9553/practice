#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void backtrack(vector<vector<int>>& board, int y, int x, int cnt) {
    ans = max(ans, cnt);
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        while (ny >= 0 && ny < n && nx >= 0 && nx < m && board[ny][nx] == 0) {
            ny += dy[i];
            nx += dx[i];
        }
        if (ny < 0 || ny >= n || nx < 0 || nx >= m || board[ny][nx] == 0) continue;

        int nny = ny + dy[i];
        int nnx = nx + dx[i];
        while (nny >= 0 && nny < n && nnx >= 0 && nnx < m && board[nny][nnx] == 0) {
            nny += dy[i];
            nnx += dx[i];
        }
        if (nny < 0 || nny >= n || nnx < 0 || nnx >= m || board[nny][nnx] == 0) continue;

        board[nny][nnx] = 0;
        backtrack(board, nny, nnx, cnt + 1);
        board[nny][nnx] = 1;
    }
}

int main() {
    cin >> n >> m;
    vector<vector<int>> board(n, vector<int>(m, 1));
    board[0][0] = 0;
    backtrack(board, 0, 0, 0);
    cout << ans << '\n';
    return 0;
}
