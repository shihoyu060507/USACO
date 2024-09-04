#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[100][3];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1]>>arr[i][2a];
  }
  int result=0;
  for(int i=1;i<=3;i++){
    int now=i;
    int cnt=0;
    for(int j=0;j<n;j++){
      int a = arr[j][0];
      int b = arr[j][1];
      int g = arr[j][2];
      if(now==a){
        now=b;
      }
      else if(now==b){
        now=a;
      }
      if(now==g){
        cnt++;
      }
    }
    result=max(result,cnt);
  }
  cout<<result;
  
  return 0;
  
}
