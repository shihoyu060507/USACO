#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1,x2,x3,x4;
  int y1,y2,y3,y4;
  
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> x3 >> y3 >> x4 >> y4;
  
  if(y4>y2 && y1>y3){
    if(x2-x3>0 && x2-x4<0) x2=x3;
    
    if(x4-x1>0 && x1-x3>0) x1=x4;
  }
  
  if(x4>x2 && x1>x3){
    if(y2-y3>0 && y2-y4<0) y2=y3;
    
    if(y4-y1>0 && y1-y3>0) y1=y4;
  }
  
  cout << (x2-x1)*(y2-y1);
  
  return 0;
}
