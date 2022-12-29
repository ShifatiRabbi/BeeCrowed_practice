#include<stdio.h>
int main()
{
    int i,x,max,a[1000];
    for(i=1; i<=100; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[1];
    x=1;
      for(i=1; i<=100; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
    }
    printf("%d\n%d\n",max,x);
    return 0;
}
