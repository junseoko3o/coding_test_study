#include<bits/stdc++.h>
using namespace std;
vector<int> v {2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9}; // sort를 꼭해줘야함 -> unique는 앞에서부터 중복되는걸 찾기 때문
int main() {
  // sort 필수
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  for (int j : v) cout << j << " ";
  cout << "\n";
  return 0;
}