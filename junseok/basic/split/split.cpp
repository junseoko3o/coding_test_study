// 외워.
#include<bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter) {
  vector<string> result;
  auto start = 0;
  auto end = input.find(delimiter); // find가 size_t 타입을 반환하는데 편의상 auto
  while (end != string::npos) { // 더이상 몾찾을때
    result.push_back(input.substr(start, end - start));
    start = end + delimiter.size();
    end = input.find(delimiter, start); // start 부터 delimiter를 찾는다
  }
  result.push_back(input.substr(start));
  return result;
}

int main() {
  string str = "apple,banana,orange,grape";
  vector<string> fruits = split(str, ",");
  for(const string& fruit : fruits) {
    cout << fruit << " ";
  }
  return 0;
}