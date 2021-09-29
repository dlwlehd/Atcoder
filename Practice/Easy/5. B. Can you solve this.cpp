#include <bits/stdc++.h>
using namespace std;
 
int n, m, c;
int board[22][22];
int b[22];
int cnt = 0;
 
void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}
 
int main() {
    input();
    cin >> n >> m >> c;
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
  	for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> board[i][j];
      }
    }
  	
  	for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = 0; j < m; j++) {
        sum += board[i][j] * b[j];
      }
      sum += c;
      if (sum > 0) cnt++;
    }
  	
  	cout << cnt;
}
