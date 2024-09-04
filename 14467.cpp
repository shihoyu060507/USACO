#include <bits/stdc++.h>
using namespace std;


int main(){
  int cnt;
  cin>>cnt;
  int cow[100][2];
  int countcow[100];
  int check[100];
  int i,j,min=0;
  
  for(i=0;i<cnt;i++){
    cin>>cow[i][0]>>cow[i][1];
  }
  for(i=0;i<cnt;i++){
    countcow[i]=0;
    check[i]=-1;
  }
  for(i=0;i<cnt;i++){
    for(j=i+1;j<cnt;j++){
      if((cow[i][0]==cow[j][0])&&(cow[i][1]!=cow[j][1]&&cow[j][1]!=check[cow[i][0]])){
        countcow[cow[i][0]]++;
        check[cow[i][0]]=cow[j][1];
        break;
      }
    }
  }
  for(i=0;i<cnt-1;i++){
    min+=countcow[i];
  }
  cout<<min;
  return 0;
}
