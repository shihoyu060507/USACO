#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,n,k;
  char s[10][11];
  cin >> m >> n >> k;
  
  for(int i=0;i<m;i++) cin >> s[i];
  for(int i=0; i<m*k; i++){
    for(int j=0; j<n*k; j++){
      cout << s[i/k][j/k];
    }
    cout << "\n";
  }
  
  
  return 0;
}
