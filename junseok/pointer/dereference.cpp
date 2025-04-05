#include<bits/stdc++.h>
using namespace std;
int main() {
  string a = "junseok";
  string *b = &a;
  cout << b << "\n"; // 주소값 출력
  cout << *b << "\n"; // 해당 값이 나온다.
  return 0;
}