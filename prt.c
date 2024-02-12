#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      printf("enter the value of b[%d]=",i);
      scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int f=1;
        for(int j=1;j<=a[i];j++)
        {
           f=f*j;
        }
        a[i]=f;
    }
    printf("new array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}