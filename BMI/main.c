#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float BMI_imperial(void);
float BMI_metric(void);

int main()
{


    char choice[8];
    float BMI=0;


    printf("please entre system of measurement, metric or imperial(i or m)\n");
    fgets (choice, 8, stdin);

    if(strcmp(choice,"i\n")!=0 && strcmp(choice,"m\n")!=0){
    printf("invalid choice");
    }
    else{

        if(strcmp(choice,"i\n")==0){
        BMI=BMI_imperial();
        }
        else{
        BMI=BMI_metric();
        }

        if(BMI<18.5){
        printf("BMI=%.4g indicating underweight", BMI);
        }
        if(BMI>=18.5 && BMI<25){
        printf("BMI=%3.4f indicating Normal weight", BMI);
        }
        if(BMI>=25 && BMI<30){
        printf("BMI=%.4g indicating overweight", BMI);
        }
        if(BMI>=30){
        printf("BMI=%.4g indicating obesity", BMI);
        }



        }
    return 0;
}
float BMI_metric(void){
    float metres=0;
    float kg=0;
    float returnBMI=0;

    printf("please input your height in metres\n");
    scanf("%f",& metres);

    printf("please input your weight in kilograms\n");
    scanf("%f",& kg);

    returnBMI=kg/(metres*metres);

    return returnBMI;
}
float BMI_imperial(void){
    float returnBMI=0;
    int pounds=0;
    int stones=0;
    int inches=0;
    int feet=0;
    int height=0;
    int weight=0;

    printf("please intput your height in feet and inches(5 10)\n");
    scanf("%d %d",& feet,& inches);
    height=feet*12+inches;

    printf("please input your weight in stones and pounds(9 10)\n");
    scanf("%d %d",& stones,& pounds );
    weight=stones*14+pounds;

    returnBMI=(weight*703)/(height*height);

    return returnBMI;
}
