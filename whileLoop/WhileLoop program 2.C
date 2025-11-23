#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum= 0;
    clrscr();
	  printf("Enter a Number:\n ");
	    scanf("%d",&n);
    while(n>0)
    {
       sum+=n % 10;
       n=n / 10;
    }
     printf("Sum of the digits=%d",sum);
     getch();

}
