#include <bits/stdc++.h>
using namespace std;

int N,NQ,P,a[50001][51], cnt[50001];
int main(){
  cin >> N >> NQ >> P;
  for(int i=1;i<=N;i++){
    for(int j=1;j<=NQ;j++){
      cin>>a[i][j];
    }
  }
  int Qj, Aj;
  int result=0;
  for(int i=1;i<=P;i++){
    cin >> Qj >> Aj;
    for(int j=1;j<=N;j++){
      if(a[j][Qj]==Aj){
        cnt[j]++;
      }
    }
  }
  for(int i=1;i<=N;i++){
    if(cnt[i]==P){
      result++;
    }
  }
  cout << result;

  
  
  return 0;
}
