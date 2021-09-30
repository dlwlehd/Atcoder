#include <bits/stdc++.h>
using namespace std;

int n;
int alice = 0, bob = 0;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt", "r", stdin);
}

int main() {
    input();
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<>());

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) alice += a[i];
        else bob += a[i];
    }
    cout << alice - bob;
}