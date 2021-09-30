#include <bits/stdc++.h>
using namespace std;
 
int board[3][3];
int n;
bool vis[3][3];
 
int main() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> board[i][j];
    }
  }
  cin >> n;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int x;
      cin >> x;
      for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
          if (board[k][l] == x) vis[k][l] = 1;
        }
      }
    }
  }
  
  // 가로
  
  for (int i = 0; i < 3; i++) {
    bool flag = true;
    for (int j = 0; j < 3; j++) {
      if (!vis[i][j]) flag = false;
    }
    if (flag) {
      cout << "Yes";
      return 0;
    }
  }
  
    for (int i = 0; i < 3; i++) {
    bool flag = true;
    for (int j = 0; j < 3; j++) {
      if (!vis[j][i]) flag = false;
    }
    if (flag) {
      cout << "Yes";
      return 0;
    }
  }
  
  if (vis[0][0] && vis[1][1] && vis[2][2]) {
    cout << "Yes";
    return 0;
  }
  
  if (vis[0][2] && vis[1][1] && vis[2][0]) {
    cout << "Yes";
    return 0;
  }
 
  cout << "No";
}