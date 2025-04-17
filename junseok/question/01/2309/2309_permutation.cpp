#include<bits/stdc++.h>
using namespace std;
// 9P7 -> 181440 밖에 안되니까 P로 풀 수 있겠다. (많으면 1000만은 봐야함)
int a[9];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for(int i = 0; i < 9; i++) {
    cin >> a[i];
  }
  sort(a, a + 9);
  
  do {
    for(int i : a) cout << i << " ";
    cout << "\n";
    int sum = 0;
    for(int i = 0; i < 7; i++) sum += a[i];

    if (sum == 100) break;
  } while(next_permutation(a, a + 9));

  for(int i = 0; i < 7; i++) cout << a[i] << "\n";
  return 0;
}