#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,sum=0,s=0,result=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s;
    result = s*(i+1)-sum;
    cout << result << ' ';
    sum = sum+result;
  }
  
  return 0;
}
