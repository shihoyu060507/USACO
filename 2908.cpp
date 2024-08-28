#include <stdio.h>

int main(){
  int num1,num2,rnum1=0,rnum2=0;
  scanf("%d %d",&num1,&num2);
  rnum1=(100*(num1%10)+((num1%100)-(num1%10))+(num1/100));
  rnum2=(100*(num2%10)+((num2%100)-(num2%10))+(num2/100));
  
  if(rnum1>rnum2) printf("%d\n",rnum1);
  else printf("%d\n",rnum2);
  
  return 0;
}
