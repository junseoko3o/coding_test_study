#include<bits/stdc++.h>
using namespace std;
int main() {
  vector<int>b = {1, 2, 3};
  int a[] = {1, 2, 3};
  // sort(b.begin(), b.end()); // 순열은 꼭 sort
  do {
    for(int i : a) cout << i << " ";
    cout << '\n';
  } while(next_permutation(&a[0], &a[0] + 3)); //vector인 경우 a.begin(), a.end()
}