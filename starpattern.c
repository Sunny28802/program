#include<stdio.h>
int main()
{
 int n,i,j;
 printf("enter the value of x:");
 scanf("%d",&n);
 for (int i=0;i<=n;i++)
 {
 for(int j=0;j<i+1;j++)
 {
 printf("*");
 }
 printf("\n");
 }
 return 0;
}
