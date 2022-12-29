#include<stdio.h>
int main()
{
    int i,d;
    double n;
    scanf("%lf",&n);
    i=n*100;
    printf("NOTAS:\n");

    d=i/10000;
    printf("%d nota(s) de R$ 100.00\n",d);
    i=i%10000;

    d=i/5000;
    printf("%d nota(s) de R$ 50.00\n",d);
    i=i%5000;

    d=i/2000;
    printf("%d nota(s) de R$ 20.00\n",d);
    i=i%2000;

    d=i/1000;
    printf("%d nota(s) de R$ 10.00\n",d);
    i=i%1000;

    d=i/500;
    printf("%d nota(s) de R$ 5.00\n",d);
    i=i%500;

    d=i/200;
    printf("%d nota(s) de R$ 2.00\n",d);
    i=i%200;

    printf("MOEDAS:\n");

    d=i/100;
    printf("%d moeda(s) de R$ 1.00\n",d);
    i=i%100;

    d=i/50;
    printf("%d moeda(s) de R$ 0.50\n",d);
    i=i%50;

    d=i/25;
    printf("%d moeda(s) de R$ 0.25\n",d);
    i=i%25;

    d=i/10;
    printf("%d moeda(s) de R$ 0.10\n",d);
    i=i%10;

    d=i/5;
    printf("%d moeda(s) de R$ 0.05\n",d);
    i=i%5;

    d=i/1;
    printf("%d moeda(s) de R$ 0.01\n",d);

    return 0;
}
