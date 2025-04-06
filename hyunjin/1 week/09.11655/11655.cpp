#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
  getline(cin, s); //

  for (int i = 0; i < s.size(); i++) {
    // 대문자 처리
    if(s[i] >= 65 && s[i] < 97) { // 65+25=90인데, 범위를 여기까지 잡는게 아님. 넘어갈때 처리가 따로이므로, 소문자 직전까지 범위를 잡아야 함.
      if(s[i] + 13 > 90) s[i] = s[i] - 13; // 넘어가면  +13-26 (=-13)해주기
      else s[i] = s[i] + 13; // 안넘어가면 그대로 밀기
    } else if (s[i] >= 97 && s[i] <= 122) { // 소문자 처리
      if(s[i] + 13 > 122) s[i] = s[i] - 13; // 마찬가지로 넘어가면 +13-26 (=-13)
      else s[i] = s[i] + 13; // 안넘어가면 얘도 그대로 밀기
    }

    cout << s[i];
  }

  return 0;
}