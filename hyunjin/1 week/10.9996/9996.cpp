#include<bits/stdc++.h>
using namespace std;
string str, original, prefix, suffix;
int num;
int main() {
  cin >> num;
  cin >> original;

  int index = original.find('*'); // *의 위치만 알 수 있다면...

  prefix = original.substr(0, index);
  suffix = original.substr(index + 1); // index+1부터 끝까지

  for (int i = 0; i < num; i++) {
    cin >> str;
    if (prefix.size() + suffix.size() > str.size()) cout << "NE\n"; // 쉬운 문제는 이것도 필요없는데..
    //필요한 케이스 예시: ab * ab 예시에서 ab만 넣으면 맞다고 나와버림.
    else {
      if (prefix == str.substr(0, prefix.size()) && suffix == str.substr(str.size() - suffix.size())) cout << "DA\n";
      else cout << "NE\n";
    }
  }
  return 0;
}