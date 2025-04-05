#include<bits/stdc++.h>
using namespace std;
int main () {
  vector<int> a = { 2, 1, 3};

  sort(a.begin(), a.end()); // 순열은 항상 sort가 되어있어야 함!!

  do {
    for (int i : a) cout << i << " ";
    cout << '\n';
  } while (next_permutation(a.begin(), a.end()));
  
  return 0;

}
