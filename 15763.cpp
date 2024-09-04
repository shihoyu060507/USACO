#include <bits/stdc++.h>
using namespace std;

char arr[3][3];

int cow_wins(char ch){
  if(arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) return 1;
  if(arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch) return 1;
  
  for(int i=0;i<3;i++){
    if(arr[0][i] == ch && arr[1][i] == ch && arr[2][i] == ch) return 1; 
    if(arr[i][0] == ch && arr[i][1] == ch && arr[i][2] == ch) return 1; 
  }
  
  return 0;
}

bool check3(char ch1, char ch2, char a, char b, char c){
  if(arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) return 1;
  if(arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch) return 1;
  
  for(int i=0;i<3;i++){
    if(arr[0][i] == ch && arr[1][i] == ch && arr[2][i] == ch) return 1; 
    if(arr[i][0] == ch && arr[i][1] == ch && arr[i][2] == ch) return 1; 
  }
  
  return 0;
}

int main(){
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> arr[i][j];
    }
  }
  
  int ans1=0, ans2=0;
  
  for(char ch= 'A'; ch <= 'Z'; ch++){
    ans1+=cow_wins(ch);
  }
  for(char ch1= 'A'; ch1 <= 'Z'; ch1++){
    for(char ch2= ch1+1; ch2 <= 'Z'; ch2++){
      ans2+=team_wins(ch1, ch2);
    }
  }
  
  cout << ans1 << "\n" << ans2;
  return 0;
}
