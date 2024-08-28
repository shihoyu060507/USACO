#include <bits/stdc++.h>
using namespace std;

int main(){
  int num;
  cin >> num;
  int arr[num+5];
  for(int i=0;i<num;i++){
    cin >> arr[i];
  }
  int result=0;
  
  for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
      for(int k=0;k<num;k++){
        if(i!=j&&i!=k&&j!=k){
          if((arr[i]-arr[j])%arr[k]!=0)
            result++;
        }
      }
    }
  }  
  if(result==0) cout << "yes" << "\n";
  else cout << "no" << "\n";

  return 0;
}  
