#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt", "r", stdin);
}

int main() {
    input();
    cin >> n;
    vector<int> a(n);
    vector<bool> vis(n);
    fill(vis.begin(), vis.end(), 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;

        int x = a[i] - 1;
        if (a[x] == i + 1) {
            vis[x] = 1;
            vis[i] = 1;
            cnt++;
        }
    }
    cout << cnt;
}