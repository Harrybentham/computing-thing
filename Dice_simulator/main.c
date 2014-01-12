#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int dicenum=0;
   int diceface=0;
   int min=1;
   int count=0;
   int result;
   int total=0;
   float average=0;

    printf("please input the number of dice you want to throw \n");
    scanf("%d",& dicenum);

    printf("please input the number of sides the die/dices should have\n");
    scanf("%d",& diceface);

    for(count=0; count < dicenum; count++){
        srand(count);
        result=rand()%diceface + min;
        printf("dice %d = %d\n", count+1, result);
        total+=result;

    }

    average=total/count;
    printf("sum total= %d\nmean average=%3.4f",total, average);


        return 0;
}
