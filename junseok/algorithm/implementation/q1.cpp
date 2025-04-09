// string dopa = "umzunsik";

#include<bits/stdc++.h>
using namespace std;
string dopa = "abcde";

void print(string txt) {
  cout << txt << "\n";
}

int main() {
// Q1. 앞에서부터 3개의 문자열을 출력하라
  string q1 = dopa.substr(0, 3);
  print(q1);

// Q2. 해당 문자열을 거꾸로 해서 출력하라.
  reverse(q1.begin(), q1.end());
  print(q1);

// Q3. 거꾸로된 해당 문자열 끝에 "umzunsik"이란 문자열을 추가하라.
  q1 += "umzunsik";
  print(q1);

  return 0;
}