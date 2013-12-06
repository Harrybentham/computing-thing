#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
        int result=0;
        int divisor=2;
        int number=0;
        int remainder =0;
        int b=0;
        int c=0;
        int flag=0;

        printf("Please input your number\n");
        scanf("%d", &number);

        while(flag==0){
            remainder=0;
            for(b=divisor-1 ;b==1;b--){
                if(divisor%b== 0){
                    result=number%divisor;
                    result=number/divisor;
                    number=result;
                    printf("%d*",divisor);
                    divisor=1;
                }
                }

            remainder=0;
            for(c=result-1 ;c==1;c--){
                if(result%c== 0){
                    flag=1;
                    printf("%d",result);
                }

            }
        divisor++;
        }
        return 0;
        }
