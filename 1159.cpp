#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int c[10000]={};
  string s;
  for(int i=0;i<N;i++){
    cin >> s;
    c[s[0]]++;
  }
  int cnt=0;
  for(int i='a';i<='z';i++){
    if(c[i]>=5){
      cout << char(i);
      cnt++;
    }
  }
  
  if(cnt==0) {
    cout << "PREDAJA";
  }
  
  return 0;
}
