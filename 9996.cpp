#include <bits/stdc++.h>
using namespace std;

int n;
string s, ori_s, pre, suf;
int main(){
  cin >> n >> ori_s;
  bool flag=0;
  for(int i=0;i<ori_s.size();i++){
    if(ori_s[i]=='*') flag=1;
    else {
      if(flag)suf+= ori_s[i];
      else pre+=ori_s[i];
    }  
  }
  
  for(int i=0;i<n;i++){
    cin>>s;
    if(pre.size()+suf.size() > s.size()){
      cout << "NE\n";
    }
    else{
      bool flag2=1;
      for(int j=0;j<pre.size();j++) if(s[j]!=pre[j]) flag2=0;
      for(int j=0;j<suf.size();j++) if(s[s.size()-suf.size()+j]!=suf[j]) flag2=0;
      if(!flag2) cout << "NE\n";
      else cout << "DA\n";
    }
  }
  return 0;
}
