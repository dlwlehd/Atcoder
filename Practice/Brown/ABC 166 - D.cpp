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
    cin >> n;
    for (int i = -118; i <= 119; i++) {
        for (int j = -119; j <= 118; j++) {
            if (pow(i, 5) - pow(j, 5) == n) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
}