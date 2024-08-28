#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(&a[0],&a[n]);
  
  for(int i=0;i<n;i++){
    printf("%d\n",a[i]);
  }
  
  return 0;
}
