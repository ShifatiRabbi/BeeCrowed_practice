
#include<stdio.h>
int main()
{
    long long int n,i,m[10005],x=0,y=0;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&m[i]);
        if(m[i]>=10 && m[i]<=20)
        {
            x++;
        }
        else
            y++;
    }

    printf("%lld in\n%lld out\n",x,y);
    return 0;
}
