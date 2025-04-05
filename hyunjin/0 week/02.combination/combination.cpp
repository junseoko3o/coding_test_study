#include<bits/stdc++.h>
using namespace std;

int n = 5, k = 3;

void print(vector<int> b) {
  for (int i : b)cout << i << " ";
  cout << '\n';
}

// 재귀함수를 사용하는 방법도 있음.
void combination_recursion(int start, vector<int> b) {
  if (b.size() == k) {
    // logic?
    print(b);
    return;
  }

  for(int i = start + 1; i < n; i++) {
    b.push_back(i);
    combination_recursion(i, b);
    b.pop_back();
  }
}

int main() {
  cout << "반복문을 사용한 예시: \n";
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++){ 
      for(int k = j + 1; k < n; k++) {
        cout << i << " " << j << " " << k << '\n';
      }
    }
  }

  vector<int> b;
  cout << "\n재귀 방식의 조합:\n";
  combination_recursion(-1, b);

  return 0;
}