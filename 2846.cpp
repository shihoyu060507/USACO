#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int p[1001];
  int ans=0;
  int l=1,r=1;
  
  cin >> N;
  
  for(int i=1;i<=N;i++){
    cin >> p[i];
  }
  
  for(int i=1;i<N;i++){
    if(p[i]<p[i+1]){
      r++;
      ans = max(ans,p[r]-p[l]);
    }
    
    else if(p[i]>=p[i+1]){
      l=i+1;
      r=i+1;
    }
  }
  
  cout << ans;
  return 0;
}
