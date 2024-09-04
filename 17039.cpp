#include <bits/stdc++.h>
using namespace std;

int arr[4];
int maximum,minimum;

int main(){
  for(int i=0;i<3;i++){
    cin >> arr[i];
  }
  sort(&arr[0],&arr[3]);
  
  if(arr[2]-arr[0]!=2) minimum=(arr[2]-arr[1]==2 || arr[1]-arr[0]==2) ? 1:2;
  
  maximum=max(arr[2]-arr[1],arr[1]-arr[0])-1;
  
  cout << minimum << "\n" << maximum;
  return 0;
}
