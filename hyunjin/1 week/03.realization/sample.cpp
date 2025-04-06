#include<bits/stdc++.h>
using namespace std;

void q1() {
  string dopa = "abcde";

  // Q1. 앞에서부터 3개의 문자열 출력
  string three = dopa.substr(0, 3);
  cout << three << endl;
  // Q2. 해당 문자열을 거꾸로 출력
  reverse(three.begin(), three.end());
  cout << three << endl;
  // Q3. 거꾸로된 문자열 끝에 "umzunsik" 이라는 문자열 추가
  three += "umzunsik";
  cout << three << endl;
}

void q2() {
  vector<int> vec;
  int n, temp;
  
  cin >> n;
  double db = 0;

  for(int i = 0; i < n; i++) {
    cin >> temp;
    db += temp;
    vec.push_back(temp);
  }

  sort(vec.begin(), vec.end());

  for(int i: vec) cout << i << " ";
  
  cout << endl;
  cout << fixed << setprecision(2) << (db / n) << '\n';
}

int main() {
  // q1();
  q2();
  return 0;
}