#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;
  int ans=0,cur=x,two=1,dir=1;
  while(1){
    while(1){
      if(cur==y){
        cout << ans;
        return 0;
      }
      if(cur==x+dir*two) break;
      ans++;
      cur+=dir;
    }
    dir*=-1;
    two*=2;
  }
  
  return 0;
}
