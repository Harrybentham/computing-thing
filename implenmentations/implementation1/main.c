#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SDL/SDL.h"

int main()
{
   int randomnumber[10000];
   int count=0;
   int i,j,tmp,startticks,elapsedtime;

    while(count<10000){
        srand(SDL_GetTicks()+count);
        randomnumber[count]=rand();
        randomnumber[count]/=10000;
        count++;
    }

    startticks=SDL_GetTicks();

        printf("time at start: %d milliseconds", startticks);

    for(i=0;i<10000;i++){
        for(j=0;j<10000;j++){
            if(randomnumber[i]>randomnumber[j]){
                tmp=randomnumber[i];
                randomnumber[i]=randomnumber[j];
                randomnumber[j]=tmp;
            }
        }
    }

    elapsedtime=SDL_GetTicks()-startticks;
    printf("time at end: %d milliseconds",SDL_GetTicks());

    for(count=0;count<10;count++){
        printf("%d\n",randomnumber[count]);
    }

    printf("time taken to run algorithm implementation: %d milliseconds", elapsedtime);
    return 0;
}
