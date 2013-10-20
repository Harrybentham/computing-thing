#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int a=0;
int countlower=0;
int countupper=0;
int countnumber=0;
int passwordstrength=0;
int passwordlength=0;
int passwordcheck=0;

char passwordinput[13];
char passwordinput2[13];

printf ("please enter a password between 6 and 12 letters long\n");

fgets (passwordinput, 13, stdin);
printf("program read : %s", passwordinput);

while ( passwordinput[a] != '\0' )
{
if (passwordinput[a] >= 'a' && passwordinput[a] <='z' )
countlower++;

if (passwordinput[a] >= 'A' && passwordinput[a] <='Z' )
countupper++;

if (passwordinput[a] >= '0' && passwordinput[a] <='9' )
countnumber++;

a++;
}

passwordlength=a-1;
passwordcheck=countlower+countupper+countnumber;

printf("lower %d upper %d number %d \n", countlower, countupper, countnumber);

if(countlower>0 )
passwordstrength++;

if(countupper>0 )
passwordstrength++;

if(countnumber>0 )
passwordstrength++;

if(5<a && a<13)
{
if(passwordcheck!=passwordlength)
{
printf("Your password should be letters and numbers\n");
}
else
{
if(passwordstrength==1)
printf("Password strength is WEAK\n");

if(passwordstrength==2)
printf("Password strength is MEDIUM\n");

if(passwordstrength==3)
printf("Password strength is STRONG\n");

printf ("please reenter your password\n");
fgets (passwordinput2, 13, stdin);
if(strcmp(passwordinput,passwordinput2)==0)
printf("Passwords match correctly\n");
else
printf("Passwords do not match\n");

}
}

else
{
printf("password must be between 6 and 12 characters. Your password is %d\n",passwordlength);
}

return 0;
}
