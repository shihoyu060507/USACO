#include <bits/stdc++.h>
using namespace std;

int a[1000001],b[1000000];
int main(){
  int n,l,k,i,j,s=0,f;
  cin >> n >> l >> k;
  
  for(i=1;i<=n;i++)
    b[i]=0;
  
  for(i=1;i<=n;i++)
    cin >> a[i];
  
  while(s<n){
    for(i=1;i<=n;i++)
      if(a[i]<=l && b[i]==0) {b[i]=1;l+=k;s++;}
    f=0;
    for(i=1;i<=n;i++)
      if(a[i]<=l && b[i]==0) f=1;
    if(f==0) break;
  }
  cout << s;
  
  
  return 0;
}
