#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[10000];
  int n=0,cnt=0;
  
  for(int i=0;i<10;i++){
    cin >> n;
    arr[n%42]++;
  }
  for(int i=0;i<42;i++){
    if(arr[i]!=0){
      cnt++;
    }
  }
  cout << cnt;
  
  return 0;
}
