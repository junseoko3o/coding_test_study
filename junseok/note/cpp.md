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
- 일반적으로는 cin사용 추천 
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

- getline
- 개행 문자를 한번에 받기
```c++
#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
  getline(cin, s);
  cout << s << '\n';
  return 0;
}
```
- \n를 줄의 끝으로 인식하고 그 개행 문자 직전까지 입력 받는다.
- 종결 문자를 사용하고 싶으면 세 번째 인자로 전달.
- getline(cin, line, '.');

- 주의사항
- cin으로 T개의 getline을 받을지를 설정하고 T개 만큼 getline의 입력이 들어오는 상황일때, 특정 문자열 기반으로 버퍼플래시를 하고 받아야 한다.
```c++
#include<bits/stdc++.h>
using namespace std;
int T;
string s;
int main() {
  cin >> T;
  string bufferflush;
  getline(cin, bufferflush);
  for(int i = 0; i < T; i++) {
    getline(cin, s);
    cout << s << "\n";
  }
  return 0;
}
```

- cout
- cou << 출력할 것 << "\n";
```c++
#include<sits/stdc++.h>
using namespace std;
string a = "hihi";
string b = "hello bye...";
int main() {
  cout << a << "\n";
  cout << a << " " << "" << b << '\n';
  return 0;
}
```

- cout 실수 출력
- 기본적으로는 일부분만 출력이 된다.
- cout << fixed << setprecision(자리수) << 변수 << "\n";
```c++
#include<bits./stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int main() {
  cout << a << "\n"; // 1.23457
  cout << fixed << setprecision(3) << a << "\n";  // 1.235
  cout << fixed << setprecision(8) << a << "\n"; // 1.23456789
  return 0; 
}
```

- printf
- 형식을 지정해서 출력하면 좋다.
```c++
#include<bits/stdc++.h>
using namespace std;
int a = 1, b = 2;
int main() {
  printf("홍철 %d : 지수 %d\n", a, b);
  return 0;
}
```

```c++
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int b = 12;
int c = 2;
int main(){
  printf("%.6lf\n", a);
  printf("%02d\n", b);
  printf("%02d\n", c);
  return 0;
}
```

```c++
#include <bits/stdc++.h>
using namespace std;
int a = 1;
char s = 'a';
string str = "어벤져스";
double b = 1.223123;
int main(){
  printf("아이엠어 아이언맨 : %d\n", a);
  printf("아이엠어 아이언맨 : %c\n", s);
  printf("아이엠어 아이언맨 : %s\n", str.c_str();
  printf("아이엠어 아이언맨 : %lf\n", b);
  return 0;
}
```

- c_str() 
- printf 기반으로 문자열을 출력하려면 string을 문자열에 대한 포인터(char *) 타입으로 바꿔줘야 하기 떄문. 그래서 보통 문자열은 간단히 cout 사용하는게 좋다.