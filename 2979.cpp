#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int arr[10000];
  for(int i=0;i<3;i++){
    int start=0, end=0;
    cin >> start >> end;
    for(int j=start;j<end;j++){
      arr[j]++;
    }
  }
  int sum=0;
  for(int i=0;i<101;i++){
    if(arr[i]==1){
      sum+=arr[i]*A;
    }
    else if(arr[i]==2){
      sum+=arr[i]*B;
    }
    else if(arr[i]==3){
      sum+=arr[i]*C;
    }
  }
  cout << sum;
  return 0;
}
