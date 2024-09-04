#include <bits/stdc++.h>
using namespace std;

struct cow{
  int first, second, originaIdx;
};

bool cmp(const struct cow &a, const struct cow &b){
  return a.first > b.first;
}

int main(){
  int n,k,max,maxIdx;
  cin >> n >> k;
  vector <struct cow> arr(n);
  for(int i=0,a,b; i<n; i++){
    cin >> a >> b;
    arr[i].first = a;
    arr[i].second = b;
    arr[i].originaIdx= i+1;
  }
  sort(arr.begin(), arr.end(), cmp);
  max = arr[0].second;
  maxIdx = arr[0].originaIdx;
  for(int i=0;i<k;i++){
    if(max < arr[i].second) max = arr[i].second, maxIdx = arr[i].originaIdx;
  }
  
  cout << maxIdx;
  
  return 0;  
}
