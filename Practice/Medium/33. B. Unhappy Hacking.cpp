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
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1') st.push(s[i]);
        else {
            if (!st.empty()) st.pop();
        }
    }
    string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res;
}