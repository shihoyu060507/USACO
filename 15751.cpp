#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
  int a,b,x,y;
  int ans=0;
  scanf("%d %d %d %d",&a,&b,&x,&y);
  
  int num1=abs(a-b);
  int num2=abs(a-x)+abs(b-y);
  int num3=abs(a-y)+abs(b-x);
  
  ans=min(num1,min(num2,num3));
  
  printf("%d\n", ans);
  return 0;
}
