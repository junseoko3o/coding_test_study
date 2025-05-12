#include<bits/stdc++.h>
using namespace std;
int main () {
  int a[] = { 1, 2, 3};

  do {
    for (int i : a) cout << i << " ";
    cout << '\n';
  } while (next_permutation(&a[0], &a[0] + 3));
  // C++에서 배열의 이름은 해당 배열의 첫 번째 원소를 가리키는 포인터로 취급 함.
  // &a[0] 과 a 는 같은 것.
  // 그래서, a, a+3 으로 하더라도 같은 결과를 보일 것.
  // 이는 좀 더 명시적인 표현이라고 생각하는게 좋을 듯.
  
  return 0;

}
