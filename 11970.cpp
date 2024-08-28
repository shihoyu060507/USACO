#include <bits/stdc++.h>
using namespace std;


int main(){
  int a,b,c,d;
  int fence[101]={};
  int result=0;
  cin >> a >> b >> c >> d;
  
  for(int i=a;i<b;i++){
    fence[i]++;
  }
  for(int i=c;i<d;i++){
    fence[i]++;
  }
  
  for(int i=0;i<101;i++) {
    if(fence[i]) result++;
  }
  cout << result;
  
  
  return 0;
}
