#include<bits/stdc++.h>
using namespace std;
int n, cnt[26];// 알파벳 갯수
string s, ret;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    cnt[s[0] - 'a']++; // 문자 첫번째 글자 -> 카운팅 배열 / 배열은 문자를 집어넣어도 인덱스 기반으로해서 자동으로 인트화
  }
  for(int i = 0; i < 26; i++) if(cnt[i] >= 5) ret += (i + 'a'); // 숫자도 문자화 됨.
  if(ret.size()) cout << ret << "\n";
  else cout << "PREDAJA" << "\n";
  return 0;
}