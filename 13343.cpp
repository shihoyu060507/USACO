#include <bits/stdc++.h>
using namespace std;

int ans[200];
int main(){
  int N;
  cin >> N;
  
  while(N--){
    char s[2][11];
    int cnt[2][26] = {0, };
    for(int i=0;i<2;i++){
      cin >> s[i];
      for(int j=0;s[i][j];j++){
        cnt[i][s[i][j]-'a']++;
      }  
    }
    for(int i=0;i<26;i++){
      ans[i] += max(cnt[0][i], cnt[1][i]);
    }
  }
  for(int i=0;i<26;i++){
    cout << ans[i] << "\n";
  }
  return 0;
}
