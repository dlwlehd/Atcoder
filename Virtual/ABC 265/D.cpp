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
    ll n, p, q, r;
    cin >> n >> p >> q >> r;
    set<ll> s;
    s.insert(0);

    ll tot = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tot += x;
        s.insert(tot);
    }

    for (auto i: s) {
        if (s.find(i + p) != s.end() && s.find(i + p + q) != s.end() && s.find(i + p + q + r) != s.end()) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}