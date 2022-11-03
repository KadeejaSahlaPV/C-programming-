//Currency denomination
#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,i=0,a=0; 
static int b[]={2000,500,200,100,50,20,10,5,2,1};
printf("Enter the amount:");
scanf("%d",&n); 
  while(n>0)
   {
    d=n/b[i];
    printf("\nNumber of %d notes is:%d",b[i],d);
    a=a+d;
    n=n%b[i];
    i++;
    }
    printf("\nThe number of total notes are:%d",a);
}
