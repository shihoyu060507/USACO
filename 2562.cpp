#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[9][9];
  int max=-1,row=0,column=0;
  
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cin >> arr[i][j];
      if(max < arr[i][j]){
        max=arr[i][j];
        row=i+1;
        column=j+1;
      }
    }
  }
  cout << max << "\n";
  cout << row << " " << column;
  return 0;
}
