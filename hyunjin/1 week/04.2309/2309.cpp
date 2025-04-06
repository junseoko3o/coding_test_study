#include<bits/stdc++.h>
using namespace std;
int ar[9], sum;
vector<int> vec;
pair<int, int> ret; // 7개를 찾는게 아닌 가짜 둘을 찾을 것.

void process() {
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < i; j++) {
      if (sum - ar[i] - ar[j] == 100) {
        ret = { i, j};
        return; // 다중 포문을 탈출하는 가장 빠른 방법은 return
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for(int i = 0; i < 9; i++) {
    cin >> ar[i];
    sum += ar[i];
  }
  process();
  for(int i = 0; i < 9; i++) {
    if (ret.first == i || ret.second == i) continue; // 우린 가짜 둘을 찾아내기로 했으니까.
    vec.push_back(ar[i]);
  }

  sort(vec.begin(), vec.end());
  for(int i:vec) cout << i << ' '; 
  return 0;
}