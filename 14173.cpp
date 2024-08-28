#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int x1,y1,x2,y2,x3,y3,x4,y4;
  int a,b,ans;
  
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
  
  a=max(x2,x4)-min(x1,x3);
  b=max(y2,y4)-min(y1,y3);
  ans=max(a,b);
  
  printf("%d\n",ans * ans);
  return 0;
}
