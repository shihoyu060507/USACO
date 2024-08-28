#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int cnt=0;
  
  for(int i=1;i<=5;i++){
    cin>>s;
    for(int j=0;j<s.size();j++){
      if(j+2<s.size() && s[j]=='F' && s[j+1]=='B' && s[j+2]=='I'){
        printf("%d ",i);
        cnt++;
        break;
      }
    }
  }
  if (cnt==0) printf("HE GOT AWAY!");
  
  return 0;
}
