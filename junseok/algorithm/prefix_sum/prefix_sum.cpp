#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100004], b, c, psum[100004], n, m;
int main() {
  // psum
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    psum[i] = psum[i - 1] + a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b >> c;
    cout << psum[c] - psum[b-1] << "\n";
  }
  // for(int i = 1; i <= n; i++) {
  //   cin >> a[i];
  // }
  // for(int i = 1; i <= n; i++) {
  //   cin >> b >> c;
  //   int sum = 0;
  //   for(int j = b; j <= c; j++) sum += a[j];
  //   cout << sum << "\n";
  // } 
  return 0;
}

// 구간쿼리
// 1. p_sum(정적 배열) 2. 펜윅트리(동적 배열) 두가지가 떠올라야함.