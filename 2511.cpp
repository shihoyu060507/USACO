#include <cstdio>

int main(){
  int A[10];
  int B[10];
  int score_A=0, score_B=0;
  char win;
  
  for(int i=0;i<10;i++){
    scanf("%d",&A[i]);
  }
  for(int i=0;i<10;i++){
    scanf("%d",&B[i]);
  }
  for(int round=0;round<10;round++){
    if(A[round]>B[round]){
      score_A+=3;
      win='A';
    }  
    if(A[round]<B[round]){
      score_B+=3;
      win='B';
    }
    if(A[round]==B[round]){
      score_A+=1;
      score_B+=1;
    }
  }
  if(score_A==10 && score_B==10) {
    win='D';
  }
  
  if (score_A>score_B) {
    printf("%d %d\nA\n",score_A, score_B);
  }
  
  else if (score_A<score_B) {
    printf("%d %d\nB\n",score_A, score_B);
  }
  
  else if (score_A==score_B) {
    if (win=='A'){
      printf("%d %d\nA\n",score_A, score_B);
    }
    else if (win=='B'){
      printf("%d %d\nB\n",score_A, score_B);
    }
    else if (win=='D') {
      printf("%d %d\nD\n",score_A, score_B);
    }
  }
  
  return 0;
}
