#include <bits/stdc++.h>
using namespace std;

int room[1001];

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin>>room[i];
  }
  int ans=n*n*100;
  for(int i=0;i<n;i++){
    int current=0;
    for(int j=0;j<n;j++){
      current+=j*room[(i+j)%n];
    }
    if(current<ans){
      ans=current;
    }
  }

  cout<<ans;
  
  return 0;
}
