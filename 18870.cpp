#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;
bool cmp(p a, p b){
  return a.second < b.second;
}

int n;
p num[10000001];
int ans[1000001];
int main(){
  
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> num[i].first;
    num[i].second=i;
  }
  
  sort(num,num+n);
  
  ans[num[0].second]=0;
  
  for(int i=1;i<n;i++){
    if(num[i-1].first == num[i].first)
      ans[num[i].second] = ans[num[i-1].second];
    else
      ans[num[i].second] = ans[num[i-1].second] + 1;
  }
  
  for(int i=0;i<n;i++){
    cout << ans[i] << " ";
  }
  
  return 0;
}
