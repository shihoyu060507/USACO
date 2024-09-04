#include <bits/stdc++.h>
using namespace std;

int arr[5000][5000] = {0, };
int main(){
  int n;
  int color,location,temp1,temp2;
  int result=0;

  cin >> n;
  
  for(int i=1;i<=n;i++){
    cin >> location >> color;
    
    arr[color][0]++;
    
    int color_num=(arr[color][0]);
    
    arr[color][color_num]=location;
    
  }
  
  for(int i=1;i<=n;i++){
    sort(arr[i]+1,(arr[i]+1)+arr[i][0]);
  }
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=arr[i][0];j++){
      temp1=(j!=1 ? arr[i][j]-arr[i][j-1]:2e9);
      temp2=(j!=arr[i][0] ? arr[i][j+1]-arr[i][j]:2e9);
      result += min(temp1,temp2);
    }  
  }
  
  cout << result;
  return 0;
}
