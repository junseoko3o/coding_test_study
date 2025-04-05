#include<bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
// vector<int> a;는 안된다.
// int[], double[] 등 정적 배열만 해당된다.
int main() {
  int * c = a; // atpd
  cout << c << "\n"; 
  cout << &a[0] << "\n";
  cout << c + 1 << "\n"; // + 1해서 다음 주소값 반환 가능.
  cout << &a[1] << "\n";
  return 0;
}