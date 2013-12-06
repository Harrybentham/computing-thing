#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
        int value=0;
        int base=0;
        int result=0;
        int size=0;
        int i=0;
        char input_number[256];
        printf("Please choose a base: ");
        scanf("%d", &base);

        if(base<=1 || base>10){
            printf("This is an incorrect base!\n");
            return -1;
            }
        printf("Please enter your number in the base that you have chosen: ");
        scanf("%d", &value);

        if(value<0){
            printf("We do not deal with negative numbers\n");
            return -1;
            }
        sprintf(input_number, "%d\n", value);
        size = strlen(input_number);

        for(i=0; i<size-1; i++){
            if(input_number[i]-'0'>=base){
                printf("Your number is not encoded in the correct base\n");
                return -1;
                }
            result+=(input_number[i]-'0')*(int)pow(base, size-2-i);
            }

        printf("base: %d, input: %d, output: %d\n", base, value, result);
        return 0;
        }
