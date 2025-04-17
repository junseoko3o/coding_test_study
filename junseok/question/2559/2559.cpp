// N : 1 ~ 10만
// k : 1 ~ 10만 -1(n사이값) 포함되는 값이라면
// 온도는 -100 ~ 100
// 연속된 온도의 합이 최대 되는 값 : 구간합 prefix sum, psum, psum[i] = psum[i -1] + a[i];
// 이 문제의 최솟값? -100 * (10만 -1) 대략 -1000만
// 최대값은 어디서 부터?

// 최대값을 구하라 최소값부터 최대값  ret = max(ret, value);
// 최소값을 구하라 최대값부터 최소값  ret = min(ret, value);
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k, temp, psum[100001], ret = -10000004;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cin >> n >> k;
  for(int i = 1; i <= n; i++){
    cin >> temp; psum[i] = psum[i - 1] + temp;
  }
  for(int i = k; i <= n; i++) {
    ret = max(ret, psum[i] - psum[i - k]);
  }
  cout << ret << "\n";
  return 0;
}