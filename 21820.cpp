#include <bits/stdc++.h>
using namespace std;
#define Max_N 100000
#define MIN(a,b) (a<b ? a:b)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,l,c[Max_N+1] = {0,}, buf;
  cin >> n >> l;
  for(int i=0;i<n;i++){
    cin >> buf;
    c[buf]++;
  }
  
  for(int i=Max_N;i>0;i--) c[i-1]+=c[i];
  for(buf = n; buf>0; buf--) if(c[buf]>=buf) break;
  
  buf+=(c[buf+1] + MIN(c[buf]-c[buf+1],l) >= buf+1);
  cout << buf;
  
  return 0;
}
