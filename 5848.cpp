#include <bits/stdc++.h>
using namespace std;

int n[1001];
int non_loop[1001];

int main(){
  int cnt=0,N;
  
  cin >> N;
  for(int i=1;i<=N;i++){
    cin >> n[i];
    if(n[i]==0) non_loop[i] = 1;
  }
  
  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      if(non_loop[n[j]]) non_loop[j]=1;
    }
  }
  
  for(int i=1;i<=N;i++){
    cnt += non_loop[i];
  }
  
  cout << cnt;
  return 0;
}
