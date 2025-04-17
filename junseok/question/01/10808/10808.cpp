#include<bits/stdc++.h>
using namespace std;
// ASCII - A 65 / a 97
typedef long long ll;
string str;
int cnt[26]; // 공간을 최소화 하기 위함. / 전역변수는 0 초기화
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> str;

  for(char a : str) {
    cnt[a - 'a']++;
  }
  for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
  
  return 0;
}

// a-z = 97-122