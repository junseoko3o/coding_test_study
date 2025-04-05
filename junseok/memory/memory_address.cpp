#include<bits/stdc++.h>
using namespace std;
int i;
int main() {
  cout << &i << "\n";
  i = 0;
  cout << &i << "\n"; // &를 통해서 변수 i의 주소를 가져올 수 있다.
  return 0;
}

// Q) 메모리주소는 OS, 실행 시간 등등에 따라 다르다. (항상 같지 않음.)
// 0이라는 값과 할당하기 전, 후는 차이가 없다.