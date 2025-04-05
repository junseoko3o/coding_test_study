#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void printV(vector<int> &v) { // 원본도 같이 수정 (참조자 &)
  cout << "result ";
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

void makePermutation(int n, int r, int depth) {
  cout << n << " : " << r << " : " << depth << "\n";

  if (r == depth) { // 기저사례
    printV(v);
    return;
  }

  for(int i = depth; i < n; i++) {
    swap(v[i], v[depth]);
    makePermutation(n, r, depth + 1);
    swap(v[i], v[depth]);
  }
}

int main () {
  for (int i = 1; i < 4; i++) v.push_back(i);
  makePermutation(3, 3, 0);
  // 굳이 외울필욘 없다 do while permutation이 있으니까
  return 0;
}


// 도식화 해볼것.