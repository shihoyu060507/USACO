#include <bits/stdc++.h>
using namespace std;

int main() {
  int n[10];
  int sum=0;
  for(int i=0;i<10;i++){
    cin >> n[i];
  }
  for(int i=0;i<10;i++){
    if(abs(sum+n[i]-100) <= abs(sum-100)){
      sum+=n[i];
    }
    else{
      break;
    }
  }
  cout << sum;
  return 0;
}
