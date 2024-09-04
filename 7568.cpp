#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  
  int x[200];
  int y[200];
  
  cin >> N;
  
  for(int i=0;i<N;i++){
    cin >> x[i] >> y[i];
  }
  
  for(int i=0;i<N;i++){
    int k=0;
    for(int j=0;j<N;j++){
      if(x[i] < x[j] && y[i] < y[j]){
        k++;
      }
    }
    cout << k+1 << " ";
  }

  return 0;
}
