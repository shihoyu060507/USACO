#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int alphabet[100]={};
  for(int i=0;i<s.size();i++){
    alphabet[s[i]-97]++;
  }
  for(int i=0;i<26;i++){
    cout << alphabet[i] << " ";
  }
  
  return 0;
}
