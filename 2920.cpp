#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[8];
  int x=1,y=1;
  for(int i=0;i<8;i++){
    cin >> a[i];
  }
  for(int i=0;i<8;i++){
    if(a[i]!=i+1){
      x=0;
      break;
    }
  }
  
  for(int i=0;i<8;i++){
    if(a[i]!=8-i){
      y=0;
      break;
    }
  }
  
  if(x==0 && y==0){
    cout << "mixed" << "\n";
  }
  else if(x==1){
    cout << "ascending" <<"\n";
  } 
  else if(y==1){
    cout << "descending" << "\n";
  }
  return 0;
}
