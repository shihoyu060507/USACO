#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int num,prize[1000],max=0;
  int x,y,z;
  
  scanf("%d",&num);
  
  for(int i=0;i<num;i++){
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && x==z && y==z){
      prize[i]=10000+x*1000;
    }
    else if(x==y || x==z){
      prize[i]=1000+x*100;
    }
    else if(y==z){
      prize[i]=1000+y*100;
    }
    else{
      if(x>y && x>z){
        prize[i]=x*100;
      }
      else if(y>x && y>z){
        prize[i]=y*100;
      }
      else{
        prize[i]=z*100;
      }
    }
    if(prize[i]>max) max=prize[i];
  }
  printf("%d\n",max);
  
  return 0;
}
