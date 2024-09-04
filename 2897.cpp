#include <bits/stdc++.h>
using namespace std;

const int MAX=50;
string s[MAX];
int result[5];

int main(){
  
  int r,c;
  
  cin >> r >> c;
  
  for(int i=0;i<r;i++){
    cin >> s[i];
  }
  
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      if(i<r-1 && j<c-1){
        int temp=0;
        if(s[i][j]=='#' || s[i][j+1]=='#' || s[i+1][j]=='#' || s[i+1][j+1]=='#') continue;
      
        if(s[i][j]=='X') temp++;
        if(s[i+1][j]=='X') temp++;
        if(s[i][j+1]=='X') temp++;
        if(s[i+1][j+1]=='X') temp++;
      
        result[temp]++;
      }
    }
  }
  
  for(int i=0; i<5; i++){
    cout << result[i] << "\n";
  }
  
  return 0;
}
