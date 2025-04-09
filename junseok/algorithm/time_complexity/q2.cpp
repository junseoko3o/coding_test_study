#include<bits/stdc++.h>
using namespace std;
int N, M;
void solve(int N, int M) {
  int a = 1;
  for (int i = 0; i < N; i++) { // N 만큼
    a *= i;
  }
  for (int j = 0; j < M; j++) { // M 만큼
    a *= j;
  }
  cout << a << "\n";
}

int main() {
  cin >> N >> M;
  solve(N, M);
  return 0;
}


// 입력 값이 나뉘어있으면 나눠 / 그래도 나열.