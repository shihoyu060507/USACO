#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  char name[128];
  
  cin >> n >> name;
  
  int namelen=strlen(name);
  char sign[128];
  int cnt=0;
  for(int k=0;k<n;k++){
    cin >> sign;
    int signlen=strlen(sign);
    for(int start=0;start<signlen;start++){
      for(int step=1;start+(namelen-1)*step<signlen;step++){
        for(int i=0;i<namelen;i++){
          if(sign[start+i*step]!=name[i]){
            goto stop;
          }
        }
        cnt++;
        goto next;
        stop:;
      }
    }
    next:;
  }
  cout << cnt;
  
  
  
  return 0;
}
