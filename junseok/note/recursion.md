### 재귀함수 (Recursion)
- 정의 단계에서 자신을 재참조하는 함수.
- 전달되는 상태인 매개변수가 달라질 뿐 똑같은 일을 하는 함수.
- 큰 문제를 작은 부분문제로 나눠서 풀 때 사용.
- 주의사항
  - 반드시 기저사례 써야함.(종료조건)
  - 사이클이 있다면 쓰면 안됨.
  - 반복문으로 될 것 같으면 반복문으로.

```c++
#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
  if(n == 1 || n == 0) return 1; // 기저사례 1! = 0! = 1
  return n * fact(n - 1);
} 

int fact1(int n ) {
  int ret = 1;
  for(int i = 1; i <= n; i++) {
    ret *= i;
  }
  return ret;
}

int fibo(int n) { // DP사용하지 않을거면 재귀로.
  cout << "fibo : " << n << '\n';
  if(n == 0 || n == 1) return n;
  return fibo(n - 1) +  fibo(n - 2);
}

int n = 5;
int main() {
  cout <<fibo(n) << '\n';
  return 0;
}
```