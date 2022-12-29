#include<stdio.h>
int main()
{
    int n,i,x,c=0,r=0,s=0,m;
    char a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&x, &a);
        if(a=='C')
        {
            c=c+x;
        }
        else if(a=='R')
        {
            r=r+x;
        }
        else if(a=='S')
        {
            s=s+x;
        }
    }
    m=c+r+s;
    printf("Total: %d cobaias\n",m);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",c*1.0*100/m*1.0);
    printf("Percentual de ratos: %.2f %%\n",(r*1.0/m*1.0)*100);
    printf("Percentual de sapos: %.2f %%\n",(s*1.0/m*1.0)*100);

    return 0;
}
