#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,N;
  int result=0;
  
  cin >> A >> B >> C >> N;
  
  for(int i=0;i<N/A+1;i++){
    for(int j=0;j<N/B+1;j++){
      for(int k=0;k<N/B+1;k++){
        if(A*i + B*j + C*k == N){
          result++;
        }
      }
    }
  }
  if(result>0) cout << 1 << "\n";
  else cout << 0 << "\n";
  return 0;
}
