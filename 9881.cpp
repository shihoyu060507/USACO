#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, hills[1000];
  int ans=99999999;
  
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> hills[i];
  }
  
  for(int i=0;i<=100-17;i++){
    int temp=0;
    for(int j=0;j<N;j++){
      if(hills[j] < i) temp += ((i-hills[j]) * (i-hills[j]));
      if(hills[j] > i+17) temp += ((hills[j]-i-17) * (hills[j]-i-17));
    }
    ans=min(ans,temp);
  }
  
  cout << ans;
  return 0;
}
