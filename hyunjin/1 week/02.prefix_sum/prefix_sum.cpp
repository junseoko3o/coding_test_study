#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[10004], b, c, psum[10004], n, m;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    psum[i] = psum[i - 1] + a[i]; // index는 1부터.
    // 누적합이라는게 결국 이전값과 지금 내 값을 더하는거니까 이를 반복하는 것.
  }

  for(int i = 0; i < m; i++) {
    cin >> b >> c;
    cout << psum[c] - psum[b - 1] << '\n';
  }

  return 0;
}
