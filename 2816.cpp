#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n;
  int kbs1=-1, kbs2=-1;
  for(int i=0;i<n;i++){
    cin >> s;
    if(s == "KBS1") kbs1=i;
    if(s == "KBS2") kbs2=i;
  }
  int inOrder = kbs1 > kbs2 ? 1 : 0;
  for (int i=0;i<kbs1;i++){
    cout << "1";
  }
  for(int i=0;i<kbs1;i++){
    cout << "4";
  }
  for(int i=0;i<kbs2+inOrder;i++){
    cout << "1";
  }
  for(int i=0;i<kbs2+inOrder-1;i++){
    cout << "4";
  }
  



  return 0;
}
