#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  for(int i=0;i<n;i++){
    int sum=0,score=1;
    cin >> s;
    for(int j=0;j<s.size();j++){
      if (s[j]=='O'){
        sum += score;
        score++;
      }
      else{
        score=1;
      }
    }
    cout << sum << "\n";
  }
  
  
  return 0;
}
