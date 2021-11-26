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
    string a, b;
    int x[26], y[26];
    fill(x, x + 26, 0);
    fill(y, y + 26, 0);
    vector<int> diff;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) diff.push_back(i);
        x[a[i] - 'a']++;
        y[b[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (x[i] != y[i]) {
            cout << "No";
            return 0;
        }
    }

    if (diff.size() != 2 && !diff.empty()) {
        cout << "No";
        return 0;
    }

    if (diff.size() == 2) {
        if (diff[0] + 1 != diff[1]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}