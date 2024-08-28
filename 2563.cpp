#include <bits/stdc++.h>
using namespace std;

int arr[1002][1002];
int main(){
  int N;
  cin >> N;
  int x1,y1,x2,y2;
  for(int i=1;i<=N;i++){
    cin >> x1 >> y1 >> x2 >> y2;
    for(int j=x1;j<x1+x2;j++){
      for(int k=y1;k<y1+y2;k++){
        arr[j][k]=i;
      }
    }
  }
  for(int i=1;i<=N;i++){
    int sum=0;
    for(int j=0;j<1001;j++){
      for(int k=0;k<1001;k++){
        if(arr[j][k]==i){
          sum++;
        }
      }
    }
    cout << sum << "\n";
  }
  
  return 0;
}
