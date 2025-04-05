#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;

int main() {
  vector<int> v{1,1,2,2,3,3,4,4};

  for(int i:v) {
    if (mp[i]) {
      continue;
    } else {
      mp[i] = 1;
    }
  }

  vector<int> result;
  for(auto it : mp) {
    result.push_back(it.first);
  }

  for(int i : result) cout << i << endl;

  // using unique()
  cout << "USING UNIQUE()" << endl;
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  for(int i : v) cout << i << endl;
  return 0;
}