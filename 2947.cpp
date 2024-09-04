#include <bits/stdc++.h>
using namespace std;

int arr[6];

int main(){
  for(int i=1;i<=5;i++){
    cin>>arr[i];
  }
  for(int i=5;i>=1;i--){
    for(int j=1;j<i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        for(int k=1;k<=5;k++) {
          cout<<arr[k]<<" ";
        }
        cout << endl;
      } 
    }
  }  
  
  return 0;
}
