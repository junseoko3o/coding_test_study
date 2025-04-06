#include<bits/stdc++.h>
using namespace std;

string s, temp;

int main() {
  cin >> s;
  temp = s;
  reverse(s.begin(), s.end());
  int res = 0;
  if (temp == s) res = 1; // C++에선 이게 된다!!!!

  cout << res << '\n';
  return 0;
}