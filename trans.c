#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the value of n,m");
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the value of a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int  i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j>i)
            {
                int t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
    }
printf("transpose is ");
for(int  i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
}
}
