#include<bits/stdc++.h>
using namespace std;
int n, a[1004], cnt;
int go(int l, int r) {
  cnt++;
  if(l == r) return a[l];
  int mid = (l + r) / 2;
  int sum = go(l, mid) + go(mid + 1, r); // 재귀함수
  return sum;
}

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    a[i - 1] = i;
  }
  int sum = go(0, n - 1);
  cout << sum << "\n";
  cout << "cnt : " << cnt << "\n";
}
// 2n-1
// O(n)의 시간복잡도.


// 점화식
// 등비수열