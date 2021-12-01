#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pll;

const int mod = 1e9 + 7;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

ll fact(int n) {
    ll res = 1;
    for (int i = n; i >= 1; i--) {
        res *= i;
        res %= mod;
    }
    return res;
}

int main() {
    input();
    ll n, m, res;
    cin >> n >> m;
    if (abs(n - m) > 1) {
        cout << 0;
        return 0;
    }

    if ((n + m) % 2) {
        ll a = fact(n);
        ll b = fact(m);
        res = (a * b) % mod;
    } else {
        ll a = fact(n);
        res = (2 * a * a) % mod;
    }
    cout << res;
}