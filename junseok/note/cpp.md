# C++ basic for algorithm

## Basic
```c++
#include <bits/stdc++.h>
using namespace std;
string a;
int main() {
  cin >> a;
  cout << a << "\n";
  return 0;
}
```

- namespace
  - 변수명 중복 방지하기 위해서 범위 걸어 놓는 것.
- 대표 입력함수
  - cin, scanf
- 대표 출력 함수
  - cout, printf
- return 0;
  - main함수를 정상적으로 마무리 한다는 의미.
  - c++은 실행시 main하나를 찾고 여기부터 실행. 즉, 무조건 main하나는 만들어야함.


### typedef
- typedef <타입> <별칭>

```c++
#include <bits/stdc++.h>
using namespace std;
typedef int i;
int main() {
  i a = 1;
  cout << a << "\n";
  return 0;
}
```

### define
- define <이름> <값>

```c++
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define loop(x, n) for(int x = 0; x < n; x++)

int main() {
  cout << PI << "\n";
  int sum = 0;
  loop(i, 10) {
    sum += i;
  }
  cout << sum << "\n";
  return 0;
}
```

### STL (Standard Template Library)
- 자료구조, 함수 등을 제공 (알고리즘, 컨테이너, 이터레이터, 펑터)
- 컨테이너
  - 시퀀스 컨테이너 (sequence container)
    - 데이터를 단순히 저장해 놓는 자료구조
    - array, vector, deque, forward_list
  - 연관 컨테이너 (associative container)
    - 자료가 저장됨에 따라 자동 정렬, 중복키가 가느앟ㄴ 것은 이름에 multi가 붙는다.
    - set, map, multiset, multimap
  - 정렬되지 않은 연관 컨테이너 (unordered associative container)
    - 자료가 저장됨에 따라 자동정렬이 되지 않는 자료구조.
    - unordered_set, unordered_map, unordered_multiset, unordered_multimap
  - 컨테이너 어댑터 (container adapter)
    - 시퀀스 컨테이너를 이용해 만든 자료구조
    - stack, queue -> deque
    - priority_queue -> vector
- 이터레이터
- 펑터
  - 함수 호출 연산자를 오버로드하는 클래스 인스턴스


### 입출력
```c++
#include <bits/stdc++.h>
using namespace std;
int a;
int main() {
  cin >> a;
  scanf("%d", &a);
  return 0;
}
```
- cin
  - 문제에서 형식을 기반으로 입력이 주어지지 않는 경우 scanf 보다는 cin (개행문자 직전까지 입력 받는다.)
  - 2번 입력해야 띄어쓰기 엔터등이 나뉘어 출력됨.
- scanf
  - 첫번째 매개변수로 받는 형식을 지정해 입력 받음.
  - %d , int타입 / %lf , double타입 / %c char타입

```c++
#include <bits/stdc++.h>
using namespace std;
int a;
double b;
char c;
int main() {
  scanf("%d %lf %c", &a, &b, &c);
  printf("%d\n", a);
  printf("%lf\n", b);
  printf("%c\n", c);
  return 0;
}
```
- scanf는 이여ㅛㅇ해야할때 말고는 cin사용 추천 
- scanf로 받을 수 있는 타입과 형식
  - d int / c char / s string / lf double / ld long long

### scanf를 활용해 실수타입을 정수타입으로
```c++
#include <bits/stdc++.h>
using namespace std;
int a, b;
double c;
int main() {
  scanf("%d.%d", &a, &b);
  printf("\n%d %d\n", a, b);
  scanf("%lf", &c);
  printf("%lf\n", c);
  return 0;
}
```