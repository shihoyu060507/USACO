#include <bits/stdc++.h>
using namespace std;

int main() {
  int s[15];
  int max=0,result=0;
  for(int i=0;i<8;i++){
    cin >> s[i];
    s[i+8]=s[i];
  }
  
  for(int i=0;i<8;i++){
    result = s[i]+s[i+1]+s[i+2]+s[i+3];
    if(result>max){
      max=result; 
    }
  }  
  cout << max;
  
  return 0;
}
