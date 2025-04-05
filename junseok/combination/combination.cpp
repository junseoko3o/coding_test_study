// 재귀 함수 (암기 할 것)
#include<bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1,2,3,4,5};
void print(vector<int> b) {
  for(int i : b) cout << i << " ";
  cout << "\n";
}

void combi(int start, vector<int> b) {
  if(b.size() == k) {
    print(b); // 문제에 따른 로직
    return;
  }

  for(int i = start + 1; i < n; i++) {
    b.push_back(i);
    combi(i, b);
    b.pop_back();
  }
  return;
}

int main() {
  vector<int> b;
  combi(-1, b);

  // 중첩 for -> 뽑는 개수에 따라 중첩 개수 달라짐.
  for (int i = 0; i < n; i ++) {
    for(int j = 0; j < i; j++) { // 0 -> i + 1, i -> n;
      for (int k = 0; k < j; k ++) { // 0 -> j + 1, j -> n;
        cout << i << " : " << j << " : " << k << "\n";
      }
    }
  }
  return 0;
}

