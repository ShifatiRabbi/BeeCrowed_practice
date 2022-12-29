#include<stdio.h>
int main()
{
    float n,ave,sum=0;
    int i,c=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            c++;
            sum=sum+n;
        }
    }
    ave=sum/c;
    printf("%d valores positivos\n",c);
    printf("%.1f\n",ave);

    return 0;
}
