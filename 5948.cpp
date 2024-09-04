#include <bits/stdc++.h>
using namespace std;

int n,v[10001],ans;
int main(){
  cin >> n;
  while(!v[n]){
    v[n]=1;
    n=n/100 % 10*10 + n / 10 % 10;
    n*=n;
    ans++;
  }
  
  cout << ans;
  return 0;
}
