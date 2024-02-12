#include<stdio.h>
void main()
{
   int n;
   printf("enter the value of n");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    printf("enter the value of a[%d]=",i);
    scanf("%d",&a[i]);
   }
 for(int i=0;i<n;i++)
 {
    if(a[i]>a[i+1])
    {
    int t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
 }
 }
 printf("sorted array is\n");
 for(int i=0;i<n;i++)
 {
    printf("\t %d",a[i]);
 }
}