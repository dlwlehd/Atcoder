#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    input();
    ll a, b, res = 1;
    cin >> a >> b;
    int idx = a - b;
    for (int i = 0; i < idx; i++) res *= 32;
    cout << res;
}