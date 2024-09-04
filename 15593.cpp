#include <bits/stdc++.h>
using namespace std;

int lg1[101],lg2[101],shift[1001];

int main(){
  int N,ans=0;
  cin>>N;
  for(int i=0;i<N;i++){
    cin >> lg1[i] >> lg2[i];
    for(int j=lg1[i];j<lg2[i];j++){
      shift[j]++;
    }
  }
  
  for(int i=0;i<N;i++){
    for(int j=lg1[i];j<lg2[i];j++){
      shift[j]--;
    }
    int cnt=0;
    for(int j=0;j<=1001;j++){
      if(shift[j]) cnt++;
    }
    ans=max(ans,cnt);
    
    for(int j=lg1[i];j<lg2[i];j++){
      shift[j]++;
    }
  }
  cout << ans;
  
  return 0;
}
