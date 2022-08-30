#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

int h, w;
char board[502][502];
bool vis[502][502] = {0};

void debug() {
    freopen("textfile/input.txt", "r", stdin);
    freopen("textfile/output.txt", "w", stdout);
    freopen("textfile/debug.txt", "w", stderr);
}

void input() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    debug();
}

int main() {
    input();
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> board[i][j];
        }
    }

    int x = 0, y = 0;
    int prev_x = 0, prev_y = 0;
    while (true) {
        if (vis[x][y]) {
            cout << -1;
            return 0;
        }

        vis[x][y] = 1;
        if (board[x][y] == 'U') x--;
        else if (board[x][y] == 'D') x++;
        else if (board[x][y] == 'L') y--;
        else if (board[x][y] == 'R') y++;

        if (x < 0 || y < 0 || x >= h || y >= w) {
            cout << prev_x + 1 << " " << prev_y + 1;
            break;
        }

        prev_x = x;
        prev_y = y;
    }
}