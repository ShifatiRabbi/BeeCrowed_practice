#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=2.1;i=i+0.2)
    {
        for(j=1;j<=3;j++)
        {
            if(i==0)
            {
                printf("I=%d J=%d\n",i,j);
            }
else
            {
                printf("I=%.1f J=%.1f\n",i*1.0,j*1.0);
            }
        }
    }


    return 0;
}


