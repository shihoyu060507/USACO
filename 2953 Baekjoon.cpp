#include <stdio.h>

int main(){
  int num,line=0,max=0;
  for(int i=0;i<5;i++){
    int sum=0;
    for(int j=0;j<4;j++){
      scanf("%d",&num);
      sum+=num;
      if(sum>max) {
        max=sum;
        line=i+1;
      }
    }
  }

  printf("%d %d\n",line,max);
  return 0;
}
