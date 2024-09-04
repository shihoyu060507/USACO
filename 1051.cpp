#include <bits/stdc++.h>
using namespace std;

int square[50][50] = {0, };
int main(){
  int N,M;
  int len=1;
  string s;
  cin >> N >> M;
  
  for(int i=0;i<N;i++){
    cin >> s;
    for(int j=0;j<M;j++){
      square[i][j]=s[j]-'0';
    }
  }
  
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      for(int k=1;k<min(N,M);k++){
        if(i+k<N && j+k < M && square[i][j]==square[i][j+k] && square[i][j]==square[i+k][j] && square[i][j]==square[i+k][j+k]){
          len=max(len,k+1);
        }
      }
    }
  }
  int sq=len*len;
  cout << sq;
  
  return 0;
}
