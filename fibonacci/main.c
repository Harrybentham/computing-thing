#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int xminus1=1;
	int xminus2=0;
        int n=0;
        int x=0;
	int count=1;


	printf("please input the term of the fibonacci sequence\n");
	scanf("%d",&n);

	while(count<n){
	x=xminus1+xminus2;
	xminus2=xminus1;
	xminus1=x;
	count++;
	}
	printf("%d",x);

return 0;
}
