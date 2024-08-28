#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,K;
  cin >> N >> M >> K;

  int t = min(N/2, M);
  int intern = N+M-(3*t);
  
  K -= intern;
  if(K<0) {
    cout << t << "\n";
  }
  else{
    cout << t - (K+2)/3 << "\n";
  }
  return 0;
}
