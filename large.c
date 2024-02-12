#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    int l=a[0];
    for(int i=1;i<n;i++)
    {
       if(l<a[i])
       l=a[i];
    }
    printf("%d is the largest value",l);
}