#include <bits/stdc++.h>
using namespace std;
int n, cnt[26];
string s, ret;

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> s;
    cnt[s[0] - 'a']++; //첫번째만 카운트 해도 돼!
  }

  for(int i = 0; i < 26; i++) { // 이렇게 하면 어쩌피 사전순으로 나오잖아.
    if(cnt[i] >= 5) { // 같은 성씨가 다섯개는 되어야 할 거 아니에요.
      ret += (i + 'a'); // 이건 숫자를 문자로 바꾸는것
    }
  }

  if (ret.size()) cout << ret << '\n';
  else cout << "PREDAJA" << '\n'; // 기권함 ㅅㄱ
}
