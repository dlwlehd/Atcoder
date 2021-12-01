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
    int n;
    string s, t = "";
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        t += s[i];
        int x = t.size();
        if (x >= 3) {
            if (t.substr(x - 3, 3) == "fox") t.erase(x - 3, 3);
        }
    }
    cout << t.size();
}