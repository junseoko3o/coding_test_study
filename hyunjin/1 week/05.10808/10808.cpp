#include<bits/stdc++.h>
using namespace std;
string str;
int ar[26];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> str;

  for(char a: str) {
    ar[a - 'a']++; // 0을 a로, 하나씩 ++해주면 되겠지
  }

  for (int i = 0; i < 26; i++) cout << ar[i] << ' ';

  return 0;
}