#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter) {
  vector<string> result;
  auto start = 0; // 처음 검색 위치는 문자열의 처음부터
  auto end = input.find(delimiter); // 첫 번째 구분자 위치 찾기

  while (end != string::npos) { // 구분자를 찾을 수 있는 동안 반복
    result.push_back(input.substr(start, end - start)); // start부터 end 이전까지의 부분 문자열을 result에 추가
    // end - start = 추출 할 부분 문자열의 길이

    start = end + delimiter.size(); // 다음 검색 시작 위치를 현재 구분자 바로 다음으로 설정

    end = input.find(delimiter, start); // 업데이트된 start 위치부터 다시 구분자 검색
    // 더 이상 구분자가 없으면 end는 npos가 됨
  }

  result.push_back(input.substr(start)); // 마지막 부분 (마지막 구분자 이후의 문자열) 추가
  //start부터 문자열 끝까지 추출

  return result; // 분할 된 문자열들이 담긴 벡터 반환
}

int main() {
  string str = "alpha,beta,gamma,delta,epslion";

  vector<string> greek = split(str, ",");
  for(const string& alphabet:greek) {
    cout << alphabet << " ";
  }
  return 0;
}