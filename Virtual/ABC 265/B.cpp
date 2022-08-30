#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

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
    int n, m;
    ll t;
    cin >> n >> m >> t;
    vector<int> a(n - 1), b(n - 1, 0);
    for (int &i: a) cin >> i;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        b[x - 1] = y;
    }

    for (int i = 0; i < n; i++) {
        t -= a[i];
        if (t <= 0) {
            cout << "No";
            return 0;
        }
        if (i != n - 1) t += b[i + 1];
    }

    cout << "Yes";
}