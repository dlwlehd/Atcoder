#include <bits/stdc++.h>
using namespace std;

int n;
int avg = 0, tot = 0;
int res = 987654321;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("C:\\Users\\CKIRUser\\cpp\\input.txt", "r", stdin);
}

int main() {
    input();
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        avg += a[i];
    }
    avg /= n;

    for (int i = 0; i <= avg + 1; i++) {
        for (int j = 0; j < n; j++) {
            tot += pow((i - a[j]), 2);
        }
        res = min(tot, res);
        tot = 0;
    }
    cout << res;
}