#include <bits/stdc++.h>
using namespace std;

int n;
string base;
int ans;

int main(){
  
  cin >> n >> base;
  int len = base.size();
  
  for(int i=0;i<n-1;i++){
    string comp;
    cin >> comp;
    int compLen=comp.size();
    
    int cnt=0;
    for(int j=0;j<len;j++){
      for(int k=0;k<compLen;k++){
        if(base[j]==comp[k]){
          cnt++;
          comp[k]=' ';
          break;
        }
      }
    }
    if(compLen-cnt<=1 && len-cnt<=1){
      ans++;
    }
  }
  
  cout << ans;
  
  
  return 0;
}
