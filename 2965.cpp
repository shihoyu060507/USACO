#include <bits/stdc++.h>
using namespace std;

int main(){
  int k[3];
  
  for(int i=0;i<=2;i++){
    cin >> k[i];
  }
  
  cout << max(k[2]-k[1],k[1]-k[0])-1;
  
  return 0;
}
