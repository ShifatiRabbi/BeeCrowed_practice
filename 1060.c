#include<stdio.h>
int main()
{
    int i,n=0;
    float a[10];
    for(i=1;i<=6;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>0)
            n++;
    }
    printf("%d valores positivos\n",n);
    return 0;
}
