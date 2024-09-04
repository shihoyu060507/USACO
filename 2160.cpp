#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int answer=987654321;
  int firstpic, secondpic;
  char pic[5][7][51];
  
  cin >> n;
  
  for(int l=0;l<n;l++){
    for(int i=0;i<5;i++){
      for(int j=0;j<7;j++){
        cin >> pic[i][j][l];
      }
    }
  }
  
  for(int p=0;p<n;p++){
    for(int t=p+1;t<n;t++){
      int cnt=0;
      for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
          cnt += (pic[i][j][p] !=  pic[i][j][t]);
        
          if (cnt > answer) break;
        }
      }
      if(cnt < answer){
        answer=cnt;
        firstpic=p+1;
        secondpic=t+1;
      }
    }
  }  
  cout << firstpic << " " << secondpic;
  return 0;
}
