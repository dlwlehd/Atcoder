#include <bits/stdc++.h>
using namespace std;

int n, k;
int res = 0;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt", "r", stdin);
}

int main() {
    input();
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] > k - a[i]) res += 2 * (k - a[i]);
        else res += 2 * a[i];
    }
    cout << res;
}