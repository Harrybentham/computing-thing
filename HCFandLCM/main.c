#include <stdio.h>
#include <stdlib.h>

int main()
{
int biggernumber;
int smallernumber;
int first;
int second;
int count;
int temp;
int hcf;
int lcm;

printf("please input a number\n");
scanf("%d",&first);
printf("please input another number\n");
scanf("%d",&second);

if(first>second){
    biggernumber=first;
    smallernumber=second;
}else{
    biggernumber=second;
    smallernumber=first;
}

for(count=1;1<=count&& count<=smallernumber;count++){
    if(biggernumber%count==0){
        if(smallernumber%count==0){
            hcf=count;
        }
    }
}
printf("HCF= %d\n",hcf);

lcm=(biggernumber*smallernumber)/hcf;

printf("LCM= %d\n",lcm);

return 0;
}
