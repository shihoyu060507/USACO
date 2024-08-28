#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[30]={0, };
  int check;
  
  for(int i=0;i<28;i++){
    cin >> check;
    arr[check-1]=check;
  }
  
  for(int i=0;i<30;i++){
    if(arr[i]==0) {
      cout << i+1 << "\n";
    }  
  }
  
  return 0;
}
