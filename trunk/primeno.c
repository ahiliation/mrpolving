/* Jeffrin Jose <ahiliation@yahoo.co.in>  Licensed GPL v3 Copyright 2008
GPL --> http://www.gnu.org/copyleft/gpl.html */

#include<stdio.h>
#include<stdlib.h>
main ()
{
int a,c,i;
printf("\n Feed your number \n");
scanf("%d",&a);
for (i=2;i<a;i++)
{
c = a%i ;
if ( c == 0 )  
{
printf (" \n %d  is  not a  prime number \n ",a);
exit (0);
}
else
{
printf(" \n %d is a prime number \n ",a);
exit(0);
}
}
}
