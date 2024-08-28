#include <bits/stdc++.h>
using namespace std;

int main(){
  int X,Y,M;
  int max=0, ans=0;
  
  cin >> X >> Y >> M;
  
  for(int i=0;i<=M;i++){
    for(int j=0;j<=M;j++){
      if(X*i + Y*j <= M){
       ans = X*i + Y*j;
      }
      if(ans>max){
      max=ans;
      }
    }
  }
  cout << max << "\n";
  return 0;
  
}
