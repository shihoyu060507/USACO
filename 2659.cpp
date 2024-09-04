#include <bits/stdc++.h>
using namespace std;

int num(int x){
  int temp=x;
  for(int i=0;i<3;i++){
    x=x%1000 * 10 + x / 1000;
    if(temp > x) temp=x;
  }
  return temp;
}

int main(){
  int arr[4];
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }
  
  int ans = num(arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3]);
  int cnt=0;
  
  for(int i=1111;i<=ans;i++){
    if(num(i)==i) cnt++;
  }
  
  cout << cnt;
  
  return 0;
}
