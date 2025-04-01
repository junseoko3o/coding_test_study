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

### 타입
- void, char, string, bool, int, long long, double, unsigned long long


- void
  - 리턴하는 값이 없다.
  
```c++
#include <bits/>stdc++.h>
using namespace std;
int ret = 1;
void a() {
  ret = 2;
  cout << ret << "\n";
  return;
}

int main() {
  a();
  return 0;
}
```

- char
  - 작은 따옴표로 선언하며 1바이트 크기

```c++
#include <bits/>stdc++.h>
using namespace std;
int main() {
  char a = 'a';
  cout << a << "\n";
  return 0;
}
```

- char 초기화 할떄 주의점
  - char에 아무것도 할당하지 않으면 널로 초기화. 이건 빈 문자열이 아니다.
  - 특정 값으로 초기화
    - 변수를 특정 문자 또는 숫자 값으로 초기화.
  - 널 문자로 초기화
    - char ch = '\0';

```c++
#include <bits/>stdc++.h>
using namespace std;
int main() {
  char a = '\0';
  char b = 0;
  char c = NULL;
  string d = "";
  cout << "hello";
  if (a == b) cout << 1;
  if (b == c) cout << 1;
  if (string(1, a) == d) cout << 1;
  return 0;
}
```


- string

```c++
#include <bits/>stdc++.h>
using namespace std;
int main() {
  string a = "나는야";
  cout << a[0] << "\n";
  cout << a[0] << a[1] << a[2] << '\n';
  cout << a << "\n";
  string b = "abc";
  cout << b[0] << "\n";
  cout << b << "\n";
  return 0;
}
```

- 1번쨰 1바이트 출력하기 때문에 한글은 한글자당 3바이트라 이상한 문자가 출려됨.
```c++
#include <bits/>stdc++.h>
using namespace std;
int main() {
  string a = "love is";
  a += " pain!";
  a.pop_back();
  cout << a << " : " << a.size() << "\n";
  cout << char(* a.begin()) << "\n";
  cout << char(* (a.end() - 1)) << "\n";

  a.insert(0, "test ");
  cout << a << " : " << a.size() << "\n";
  
  a.erase(0 ,5);
  cout << a << " : " << a.size() << "\n";

  auto it = a.fine("love");
  if (it != string::nops) {
    cout << "포함되어 있다." << "\n";
  }

  cout << it << "\n";
  cout << string::npos << "\n";
  cout << a.substr(5, 2) << "\n";
  return 0;
}
```

- push_back()
  - 문자 하나씩 밖에 더하지 못해 보통은 += 을 사용한다.
- begin()
  - 문자열의 첫번째 요소를 가리키는 이터레이터 반환.
- end()
  - 문자열의 마지막 요소 그 다음을 가리지킄 이터레이터 반환.
- insert(위치, 문자열)
  - 특정 위치 문자열 삽입 O(n)
- erase(위치, 크기)
  - 특정 위치에 크기 만큼 문자열 삭제.
- pop_back()
  - 문자열 끝을 지운다. O(1)
- find(문자열)
  - 특정 문자열을 찾아 위치 반환.
  - 못찾으면 string::npos 반환 -> size_t 타입의 최대값을 의미.(운영체제마다 값이 다름)
- substr(위치, 크기)
  - 특정 위치에서 크기만큼의 문자열 추출.
  - 크기를 넣지 않으면 가장 끝자리까지 문자열 추출함.
- reverse()
  - string은 지원하지 않는다 문자열은 STL에서 지원하는 함수인 reverse()사용.
  - void reverse(BidirectionalIterator first, BidirectionalIterator last);
```c++
#include <bits/stdc++.h>
using namespace std;
int main() {
  string a = "It's hard to have a sore leg";
  reverse(a.begin(), a.end());
  cout << a << "\n";
  reverse(a.begin(), a.end());
  cout << a<< "\n";
  reverse(a.begin() + 3, a.end());
  cout << a<< "\n";
  return 0;
}
```
- split()
  - 특정 문자열 기준으로 쪼개어서 배열화시키는 함수.
  - c++에서는 지원하지 않아서 직접 만들어야함.
  
```c++
#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter) {
  vector<string> result;
  auto start = 0;
  auto end = input.find(delimiter);
  while (end != string::npos) {
    result.push_back(input.substr(start, end - start));
    start = end + delimiter.size();
    end = input.find(delimiter, start);
  }
  result.push_back(input.substr(start));
  return result;
}

int main() {
  string str = "one->two->three->four";
  vector<string> numbers = split(str, "->");
  for (const string& number : numbers) {
    cout << number << endl;
  }
  return 0;
}
```

### 범위기반 for 루프
```c++
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> a = {1, 2, 3};
  for(int b : a) cout << b << "\n"; // 1
  for(int i = 0; i < a.size(); i++) cout << a[i] << "\n"; // 2
  return 0;
}
```
- Array는 컴파일에 결정된 크기로만 (for int b : a)를 쓸 수 있다.
- 만약 Array를 쓰고 싶으면 입력과는 무관하게 전역변수로 컴파일시기에 배열의 크기를 정해놔야한다.
- 크기가 런타임시에 결정이 되고 범위기반 for루프를 쓰고 싶다면 vector를 써야한다.
- VLA(Variable Length Array)의 이유 때문.

```c++
#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
  51
  cin >> n;
  vector<int> a(n, 0);
  for(int i : a){
    cout << i << " ";
  }
  return 0;
}
```

- sizeof
  - 컴파일 타임 연산자로, 피연산자의 메모리 크기 (바이트 단위)를 반환.
  - sizeof(x)와 같이 괄호 안에 타입을 넣어 사용하거나 sizeof x 로 선언.
  - 반환 값은 size_t형으로, 이는 부호 없는 정수형 타입.

```c++
#include <bits/stdc++.h>
using namespace std;
int main() {
int a = 10;
  int arr[10];
  cout << "int의 크기: " << sizeof(int) << " 바이트" << "\n";
  cout << "a의 크기: " << sizeof(a) << " 바이트" <<"\n";
  cout << "arr 배열의 전체 크기: " << sizeof(arr) << " 바이트" <<"\n";
  cout << "arr 배열의 요소 개수: " << sizeof(arr) / sizeof(arr[0]) <<"\n";
return 0;
}
/*
int의 크기: 4 바이트
a의 크기: 4 바이트
arr 배열의 전체 크기: 40 바이트
arr 배열의 요소 개수: 10
```

- 참고로 위 코드에서 sizeof(arr) / sizeof(arr[0])는 배열의 요소 개수를 구하는 전형적인 기법.

- atio(s.c_str())
  - 문자열 s를 정수 int로 변환하는 방법.(ASCII to integer) const char*
  - 정수가 아닌 문자열이면 0을 반환한다.
```c++
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s = "1";
  string s2 = "amumu";
  cout << atoi(s.c_str()) << '\n';
  cout << atoi(s2.c_str()) << '\n';
  return 0;
}
/*
1
0
*/
```

- stoi()
  - string을 받아서 정수 int 반환
  - string으로 받은 그랒가 문자열인지 숫자인지 확인하려면 atoi()를 써야한다.

```c++
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s = "1234";
  int num = stoi(s);
  cout << num; // 1234
  return 0;
}
```

- bool, 참과 거짓
  - 1바이트 true, false / 1, 0

```c++
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int a = -1;
  cout << bool(a) << "\n";
  a = 0;
  cout << bool(a) << "\n";
  a = 3;
  cout << bool(a) << "\n";
}
```

- int, 4바이트짜리 정수
  - -2,147,483,648 ~ 2,147,483,647
  - 약 20억까지 표현 가능.
  - 20억 넘어간다면 int가 아니라 long long을 써야함.

- int 연산
  - int로 선언한 변수끼리 연산을 하게 되었을 때 실수가 나오면 소수점 아래 있는 수는 버림된다.
```c++
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int a = 3;
  int b = 2;
  cout << a / b << '\n'; // 1
  double c = 3;
  double d = 2;
  cout << c / d << '\n'; // 1.5
}
```

- const
  - 수정할 수 없는 변수를 정할때 쓴다.
  - 변하지 않는 상수를 미리 설정한다.
  - 함수매개변수로 넘겼을 때 매개변수 수정도 방지가 가능.
  - for반복문에 넣었을 때 상수로 만드는 기능.