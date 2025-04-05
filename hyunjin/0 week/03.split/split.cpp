#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter) {
  vector<string> result;
  auto start = 0;
  auto end = input.find(delimiter); // size_t보단 auto가 알아먹기 쉬우니까...

  while (end != string::npos) {
    result.push_back(input.substr(start, end - start));
    start = end + delimiter.size();
    end = input.find(delimiter, start);
  }

  result.push_back(input.substr(start));

  return result;
}

int main() {
  string str = "alpha,beta,gamma,delta,epslion";

  vector<string> greek = split(str, ",");
  for(const string& alphabet:greek) {
    cout << alphabet << " ";
  }
  return 0;
}