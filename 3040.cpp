#include <bits/stdc++.h>
using namespace std;

int main(){
  int n[9];
  int sum=0,x=0;
  for(int i=0;i<9;i++){
    cin >> n[i];
    sum += n[i];
  }
  int f=0;
  sum -= 100;
  for(int i=0;i<8;i++){
    for(int j=i+1;j<9;j++){
      if(n[i]+n[j]==sum){
        n[i]=n[j]=100;
        break;
      }
    }
  }
  for(int i=0;i<9;i++){
    if(n[i]!=100) cout << n[i] << "\n";
  }
  return 0;
}
