#include <bits/stdc++.h>
using namespace std;

int game[988];

int getS(int num,int cmp){
  int strike=0;
  if ((num/100)==(cmp/100)) strike++;
  if ((num%100/10)==(cmp%100/10)) strike ++;
  if (num%10==cmp%10) strike++;
  
  return strike;
}

int getB(int num, int cmp){
  int ball=0;
  int firstA=num/100, firstB=cmp/100;
  int secondA=num%100/10, secondB=cmp%100/10;
  int thirdA=num%10, thirdB=cmp%10;
  
  if (firstA==secondB || firstA==thirdB) ball++;
  if (secondA==firstB || secondA==thirdB) ball++;
  if (thirdA==firstB || thirdA==secondB) ball++;
  
  return ball;
}

int main(){
  
  int N,num,s,b,result=0;
  cin >> N;
  
  for(int i=123;i<=987;i++){
    int i1 = i/100;
    int i2 = i%100/10;
    int i3 = i%10;
    
    if (i2==0 || i3==0 || i1==i2 || i1==i3 || i2==i3) game[i]=0;
    else game[i]=i;
  }
  
  for(int i=0;i<N;i++){
    cin >> num >> s >> b;
    for(int j=123;j<=987;j++){
      if (!game[j]) continue;
      
      int cs = getS(j, num);
      int cb = getB(j, num);
      
      if (!((cs==s) && (cb==b))) game[j]=0;
    }
  }
  
  for(int i=123;i<=987;i++){
    if (game[i]) result++;
  }
  
  cout << result;

  return 0;
}
