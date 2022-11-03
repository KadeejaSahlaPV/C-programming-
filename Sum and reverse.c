#include<stdio.h>
void main()
  {
   int n,d,s=0,r=0;
   printf("Enter the number:");
   scanf("%d",&n);
   while(n!=0)
     {
      d=n%10;
      s=s+d;
      r=r*10+d;
      n=n/10;
     }
   printf("Sum of the number is:%d",s);
   printf("\nReverse of the digit is:%d",r);
}
