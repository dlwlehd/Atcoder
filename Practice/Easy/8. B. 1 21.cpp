#include <bits/stdc++.h>
using namespace std;
 
int a, b;
 
void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}
 
int main() {
  input();
  cin >> a >> b;
  string x = to_string(a) + to_string(b);
  int res = stoi(x);
  for (int i = 1; i * i <= res; i++) {
    if (i * i == res) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}