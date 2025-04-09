#include<bits/stdc++.h>
using namespace std;
int N;
int cnt;
void solve(int N) {
  int a = 0, i = N;
  while (i > 0) {
    a += i;
    i /= 2;
    cnt++;
  }
  cout << a << "\n";
  cout << "cnt : " << cnt << "\n";
}

int main() {
  cin >> N;
  solve(N);
  return 0;
}

// log는 지수함수의 역함수. 어떤 수를 나타내기 위해 고정된 밑을 몇 번 곱하여야 하는지 나타낸다.
// logn+1
// O(logN)