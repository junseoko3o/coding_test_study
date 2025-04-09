#include<bits/stdc++.h>
using namespace std;
int N, cnt;
void solve(int N) {
  cnt++;
  cout << cnt << "\n";
  if(N == 0) return;
  for (int i = 0; i < 3; i++) {
    solve(N - 1);
  }
  return;
}

int main() {
  cin >> N;
  solve(N);
  return 0;
}

// 등비수열의 합.
// O(3^n)

// 함수 하나당 호출되는 횟수.
// 보통의 재귀함수는 순차적인 구조를 가지기 때문에 호출이 2번일어나면 2^n, 번이면 3^n...이라고 보면된다.
// 하지만 저런 구조를 가지지 않는 함수는 다른 시간복잡도를 가진다. 예를들어 go(idx / 2)로 호출되는것처럼..