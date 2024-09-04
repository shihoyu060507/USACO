#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,j;
  int left=1,result=0;
  cin >> n >> m;
  cin >> j;
  for(int i=0;i<j;i++){
    int value;
    cin >> value;
    if(value<left){
      result+=left-value;
      left=value;
    }
    else if(value>(left + m - 1)){
      result += value-(left + m - 1);
      left = value - m + 1;
    }
  }
  cout << result;
  
  return 0;
}
