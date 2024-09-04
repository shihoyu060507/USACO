#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, team;
  int Atime=0, Btime=0, Ascore=0, Bscore=0;
  cin >> N;
  
  for(int i=0; i<N; i++){
    int hour, min, savehour, savemin;
    cin >> team;
    scanf("%2d:%2d", &hour, &min);
    
    if(i!=0){
      if(Ascore > Bscore){
        Atime += ((hour-savehour)*60+(min-savemin));
      }
      else if(Bscore > Ascore){
        Btime += ((hour-savehour)*60+(min-savemin));
      }
    }
    if(team==1) Ascore++;
    if(team==2) Bscore++;
    savehour=hour;
    savemin=min;
    
    if(i==N-1){
      if(Ascore>Bscore){
        Atime += ((48-savehour)*60+(-min));
      }
      
      else if(Bscore>Ascore){
        Btime += ((48-savehour)*60+(-min));
      }
    }
  }
  
  printf("%02d:%02d\n%02d:%02d",Atime/60,Atime%60,Btime/60,Btime%60);
  return 0;
}
