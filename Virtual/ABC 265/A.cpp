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
    int x, y, n;
    cin >> x >> y >> n;

    if (n < 3 || 3 * x < y) {
        cout << n * x;
    } else {
        cout << y * (n / 3) + x * (n % 3);
    }
}