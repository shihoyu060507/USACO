#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int max=0;
  int l=0;
  int c1[N];
  int c2[N];
  int a=0,b=0;
  
  for(int i=0;i<N;i++){
    cin >> c1[i] >> c2[i];
  }
  
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      l=(((c1[j]-c1[i])*(c1[j]-c1[i]))+((c2[j]-c2[i])*(c2[j]-c2[i])));
      if (l>max){
        max=l;
        a=i;
        b=j;
      }
    }
  }
  cout << a+1 << " " << b+1;
  
  return 0;
}
