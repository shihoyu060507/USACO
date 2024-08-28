#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int arr[100]={};
  for(int i=0;i<26;i++){
    arr[i]=-1;
  }
  
  for(int i=97;i<=122;i++){
    for(int j=0;j<s.size();j++){
      if(s[j]==i){
        arr[s[j]-97]=j;
        break;
      }
    }
  }
  
  for(int i=0;i<26;i++){
    cout << arr[i] << " ";
  }
  
  return 0;
}
