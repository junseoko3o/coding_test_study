#include<bits/stdc++.h>
using namespace std;
int n, cnt;
int main() {
  cin >> n;
  int a = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) { // 걸리면 n^2정도 가지겠구나.
      a += i + j; // 단순로직 상수시간
      cnt++;
    }
  }
  cout << a << "\n";
  cout << " cnt : " << cnt << "\n";
  return 0;
}

// 1/2(n^2- n)
// O(n^2)의 시간복잡도를 가진다.