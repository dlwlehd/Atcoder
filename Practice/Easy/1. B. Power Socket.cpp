#include <bits/stdc++.h>
using namespace std;
 
int a, b;
 
int main() {
  cin >> a >> b;
  a--; b--;
  cout << (b + a - 1) / a;
}