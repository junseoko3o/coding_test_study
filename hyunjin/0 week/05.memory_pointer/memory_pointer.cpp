#include<bits/stdc++.h>
using namespace std;

int main() {
  int* ptr;        // 정수형 포인터 선언
  int num = 10;
  ptr = &num;      // num의 주소를 ptr에 저장
  *ptr = 20;       // ptr이 가리키는 메모리(num)에 20을 저장

  return 0;
}