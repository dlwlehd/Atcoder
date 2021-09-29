#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[26];

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt", "r", stdin);
}

int main() {
    input();
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}