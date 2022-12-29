#include<stdio.h>
int main()
{
    int i,j,x,y;
    for(i=1; i<=9; i=i+2)
    {
        x=6+i;
        y=x-2;
        for(j=x; j>=y; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }


    return 0;
}


