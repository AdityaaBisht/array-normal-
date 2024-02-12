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
    int k;
    printf("enter the number to enter");
    scanf("%d",&k);
    int loc;
    printf("enter the location");
    scanf("%d",&loc);
for(int i=n-1;i>=loc;i--)
{
    a[i+1]=a[i];
}
  a[loc]=k;
  printf("new array is \n");
  for(int i=0;i<=n;i++)
  {
    printf("%d \n",a[i]);
  }
}