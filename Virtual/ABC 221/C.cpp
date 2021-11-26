#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;

ll res = 0;
string x;
bool vis[10];

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    input();
    cin >> x;
    sort(all(x));
    do {
        for (int i = 1; i < x.size(); i++) {
            int l = 0, r = 0;
            for (int j = 0; j < i; j++) l = l * 10 + x[j] - '0';
            for (int j = i; j < x.size(); j++) r = r * 10 + x[j] - '0';
            res = max<ll>(res, l * r);
        }
    } while (next_permutation(x.begin(), x.end()));
    cout << res;
}