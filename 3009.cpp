#include <stdio.h>

int main(){
  int x,y;
  int a,b;
  int c,d;
  int e,f;
  
  scanf("%d %d", &x,&y);
  scanf("%d %d", &a,&b);
  scanf("%d %d", &c,&d);
  scanf("%d %d", &e,&f);
  
  if(a==c) x=e;
  else if(a==e) x=c;
  else x=a;
  
  if(b==d) y=f;
  else if(b==f) y=d;
  else y=b;
  
  printf("%d %d\n",x,y);
  return 0;
}
