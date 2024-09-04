#include <bits/stdc++.h>
using namespace std;


int main(){
  char arr[101];
  char arr2[101][101];
  int a=0,r,c,k=0;
  
  cin >> arr;
  a = strlen(arr);
  
  for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
      if(i*j==a){
        if(i>j) break;
        
        else{
          r=i;
          c=j;
        }
      }
    }
  }
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      arr2[j][i]=arr[k];
      k++;
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout << arr2[i][j];
    }
  }
  
  return 0;
}
