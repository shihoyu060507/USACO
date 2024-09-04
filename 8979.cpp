#include <bits/stdc++.h>
using namespace std;

int n,k;
int gold[1001];
int silver[1001];
int bronze[1001];
int res=0;

int main(){
  cin >> n >> k;
  for(int i=0;i<n;i++){
    int index;
    cin >> index;
    cin >> gold[index] >> silver[index] >> bronze[index];
  }
  
  for(int i=1;i<=n;i++){
    if(gold[i] > gold[k]){
      res++;
    }
    else if(gold[i] == gold[k]){
      if(silver[i]>silver[k]){
        res++;
      }
      else if(silver[i] == silver[k]){
        if(bronze[i]>bronze[k]){
          res++;
        }
      }
    }
  }
  cout << res+1;
  
  return 0;
}
