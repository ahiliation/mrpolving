/* Jeffrin Jose <ahiliation@yahoo.co.in>   Licensed GPL v3 Copyright 2008
 * Twinkle Mon <twinklemon007@yahoo.co.in>
GPL --> http://www.gnu.org/copyleft/gpl.html */

#include<stdio.h>
#include<stdlib.h>
main ()
{
int a,c,b,d,i;
b=0;
printf("\n Feed your number :: ");
scanf("%d",&a);
if ( (a ==2 ) || (a ==3 ))
{
printf("\n %d is a prime number\n",a);
exit(0);
}
c=a%2;
d=a%3;
if (( c != 0 ) && (d != 0))  
{
printf(" \n %d  is   a  prime number \n ",a);
exit (0);
}
else
{
printf(" \n %d is not a prime number \n ",a);
exit(0);
}
}
