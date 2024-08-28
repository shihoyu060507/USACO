#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int arr[101]={};
  int cnt=0,result=0;
  
  for(int i=0;i<N;i++){
    int seat;
    cin >> seat;
    arr[seat]++;
    if(arr[seat]>1){
      result++;
    }
  }

  cout << result << "\n";
  return 0;
}
