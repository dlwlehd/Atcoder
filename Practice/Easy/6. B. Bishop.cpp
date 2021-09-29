#include <bits/stdc++.h>
using namespace std;
 
long long h, w;
 
void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}
 
int main() {
    input();
    cin >> h >> w;
    h == 1 || w == 1 ? cout << 1 : cout << (h * w + 1) / 2;
}