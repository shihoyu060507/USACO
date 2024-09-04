#include <bits/stdc++.h>
using namespace std;

int arr[4][2],ans[3];
int main(){
  for(int i=0;i<4;i++){
    cin >> arr[i][0]>>arr[i][1];
  }
  
  for(int i=4;i>=1;i--){
    ans[i-1] = arr[i][1]-arr[i][0];
    arr[i-1][0]-=ans[i-1];
  }
  
  for(int i=0;i<3;i++){
    cout << ans[i] << "\n";
  }
  
  return 0;
}
