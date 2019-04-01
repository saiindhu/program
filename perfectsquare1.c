#include<stdio.h>
void main()
{
    int a,b,i,v,c=0;
    scanf("%d%d",&a,&b);
    v=a*b;
    for(i=0;i<=v;i++)
    {
        if(v==i*i)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
