#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;

int ans[200002] = {0};

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    input();
    int n;
    cin >> n;
    vector<pi> x;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        x.push_back({a, 1});
        x.push_back({a + b, -1});
    }
    sort(all(x));

    int cnt = 0;
    for (int i = 0; i < x.size() - 1; i++) {
        cnt += x[i].Y;
        ans[cnt] += x[i + 1].X - x[i].X;
    }

    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
}