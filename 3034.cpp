#include <stdio.h>

int main(){
  int cnt,width,length,num;
  
  scanf("%d %d %d",&cnt,&width,&length);
  for(int i=0;i<cnt;i++){
    scanf("%d",&num);
    if(num<=width || num<=length) printf("DA\n");
    else if(num*num<=((width*width)+(length*length))) printf("DA\n");
    else printf("NE\n");
  }

  return 0;
}
