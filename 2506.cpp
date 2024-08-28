#include <bits/stdc++.h>
using namespace std;

int main(){
  int num;
  int sum=0,add=1;
  cin >> num;
  int arr[num];
  
  for(int i=0;i<num;i++){
    cin >> arr[i];
    if (arr[i]==1){
      sum += add;
      add++;
    }
    else if(arr[i]==0){
      add=1;
    }
  }
   cout << sum;

  return 0;
}
