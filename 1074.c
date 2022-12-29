#include<stdio.h>
int main()
{
    long long int n,i;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>0)
        {
            if(a[i]%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else if(a[i]<0)
        {
           if(a[i]%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else
            printf("NULL\n");

    }


    return 0;
}
