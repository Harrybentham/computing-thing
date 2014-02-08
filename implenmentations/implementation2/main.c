#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SDL/SDL.h"

int main()
{
   int randomnumber[10000];
   int count=0;
   int startticks;
   int elapsedtime;
   int tmp;
   int loop;
   int smallest;
   int smallestindex;

    while(count<10000){
        srand(SDL_GetTicks()+count);
        randomnumber[count]=rand();
        randomnumber[count]/=10000;
        count++;
    }

    startticks=SDL_GetTicks();

        printf("time at start: %d milliseconds\n", startticks);

    for(count=0;count<10000;count++){
        smallest=randomnumber[count];
        smallestindex=count;
        for(loop=count+1; loop<10000; loop++){
            if(randomnumber[loop]<smallest){
                    smallest=randomnumber[loop];
                    smallestindex=loop;
            }
        }
        tmp=randomnumber[count];
        randomnumber[count]=smallest;
        randomnumber[smallestindex]=tmp;

    }



    elapsedtime =SDL_GetTicks()-startticks;
    printf("time at end: %d milliseconds\n",SDL_GetTicks());

    for(count=0;count<10;count++){
        printf("%d\n",randomnumber[count]);
    }

    printf("time taken to run algorithm implementation: %d milliseconds\n", elapsedtime);
    return 0;
}
