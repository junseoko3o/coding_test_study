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
