#include <bits/stdc++.h>
using namespace std;

int n,p,ne,cnt=0;
int nums[1001];
int main(){
  cin >> n >> p;
  ne=n;
  
  while(!nums[ne]){
    nums[ne] = cnt++;
    ne = ne * n % p;
  }
  
  cout << cnt - nums[ne];
  return 0;
}
