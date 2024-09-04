#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  
  int a,b;
  int arr[201][201]={0,};
  for(int i=0;i<m;i++){
    cin >> a >> b;
    arr[a][b]=arr[b][a]=1;
  }
  
  int ans=0;
  for(int i=1;i<=n-2;i++){
    for(int j=i+1;j<=n-1;j++){
      if(arr[i][j]) continue;
      
      for(int k=j+1;k<=n;k++){
        if(arr[i][k] || arr[j][k]) continue;
        
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}
