### 순열 (permutation)
- 순서상관있으면 순열 없으면 조합.
- next_permutation()  *
- prev_permutation()
  
```c++
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
```

- nPr = n! / (n-r)! 
- 문제에서 순서를 재배치하여~~, ~~한 순서의 경우

<!-- ```c++
#include<bits/stdc++.h>
using namespace std;

void makePermutation(int n, int r, int depth) {

}

int mian() {
  return 0;
}
``` -->