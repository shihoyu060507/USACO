#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,max=0,M,sum=0;
  cin >> n >> M;
  int num[n];
  for(int i=0;i<n;i++){
    cin >> num[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        sum = num[i]+num[j]+num[k];
        if(sum > max && sum <= M){
          if(i!=j && j!=k && i!=k){
            max = sum;
          }
        }
      }
    }
  }
  cout << max << "\n";
  return 0;
}
