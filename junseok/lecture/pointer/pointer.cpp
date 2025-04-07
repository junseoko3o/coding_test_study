#include<bits/stdc++.h>
using namespace std;

double a = 4; // 8바이트
int c = 10; //4바이트
// Pointer -> <type> * <변수> = < 해당 타입의 변수의 주소 >
int main() {
  cout << &a << "\n";
  double *b = &a;
  int *d = &c;
  cout << b << "\n";
  cout << d << "\n";

  cout << sizeof(b) << "\n";
  cout << sizeof(d) << "\n";
  return 0;
}

// 타입 꼭 맞춰줄것.


// 역시나 주소값은 같다.
// Q) 포인터의 크기는 얼마일까? int와  double사이즈가 같다? 주소는 다르지만 주소의 최대크기는 동일하다. 그래서 포인터는 OS에따라 포인터를 갖게 된다. (고정되어있다.)