#include<stdio.h>
void main()
{
    int n,i,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
