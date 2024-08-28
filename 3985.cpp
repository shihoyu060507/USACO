#include <bits/stdc++.h>
using namespace std;

int main(){
  int L,N;
  int fake=0,real=0;
  int fake_p,real_p;
  int arr[10000];
  cin >> L >> N;
  for(int i=1;i<=N;i++){
    int P,K;
    cin >> P >> K;
    for(int j=P;j<=K;j++){
      if(arr[j]!=0){
        continue;
      }
      arr[j]=i;
    }
    if(fake<(K-P)){
      fake=K-P;
      fake_p=i;
    }
  }
  
  for(int i=1;i<=N;i++){
    int cnt=0;
    for(int j=1;j<=L;j++){
      if(arr[j]==i){
        cnt++;
      }
    }
    if(real<cnt){
      real=cnt;
      real_p=i;
    }
  }
  cout << fake_p << "\n" << real_p;
  
  return 0;
}
