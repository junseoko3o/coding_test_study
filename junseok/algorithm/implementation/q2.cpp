#include<bits/stdc++.h>
using namespace std;

// 숫자로 이루어진 배열이 주어졌을 때, 배열의 요소들을 오름차순으로 정렬하고, 배열의 평균값을 계산하는 프로그램을 작성하세요.
int n, temp;
vector<int> v;
int main() {
  cin >> n;
  double b = 0;
  // 첫 번째 줄에 정렬된 배열 출력
  for(int i = 0; i < n; i++) {
    cin >> temp;
    b += temp;
    v.push_back(temp);
  }
  // 배열의 평균값 출력, 평균값은 소수점 두 번째 자리까지
  sort(v.begin(), v.end());
  for(int i : v) cout << i << " ";
  cout << "\n";
  cout << fixed << setprecision(2) << (b / n) << "\n";
  return 0;
}