#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,min=5000;
  cin >> n;
  for(int i=0;i<1001;i++){
    for(int j=0;j<1001;j++){
      if(3*i + 5*j == n && (i+j)<min){
        min = i+j;
      }
    }
  } 
  if(min == 5000){
    cout << -1 << "\n";
  }
  else{
    cout << min << "\n";
  }  
  return 0;
}  
