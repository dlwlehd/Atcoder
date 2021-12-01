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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    input();
    ll n, ans = 0;
    cin >> n;
    for (ll a = 1; a * a * a <= n; a++) {
        for (ll b = a; a * b * b <= n; b++) {
            ll c = n / (a * b);
            ans += c - b + 1;
        }
    }
    cout << ans;
}