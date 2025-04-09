#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
  for(int i = 0; i < 10; i++) { // 10번
    for (int j = 0; j < n; j++) { // n번
      for (int k = 0; k < n; k++) { // n번
        if (true) cout << i << "\n"; // 단순 로직
      }
    }
  }
  for (int i = 0; i < n; i++) { // 중첩 x
    if(true) cout << i << "\n";
  }
  return 0;

  // 10 * n^2 만큼 시간복잡도를 가지며, 
  // 아래는 10 * n^2 + n 만큼 시간복잡도를 가진다.
}