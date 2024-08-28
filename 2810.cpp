#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  int cnt=1;
  
  cin >> n >> s;
  
  for(int i=0;i<s.size();i++) {
    if(s[i]=='L') {
      cnt++;
    }
  }
  if(cnt==0 || cnt==1){
    cout << n;
  }
  else if(cnt>=2){
    cout << n-(cnt/2)+1;
  }
  printf("\n");
  
  return 0;
}
