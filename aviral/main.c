#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float p,t,r,si,ci;
    printf("enter principle amount(P): ");
    scanf("%f", &p);

    printf(" enter time period(T): "):
        scanf("%f",&t);

        printf("enter the rate(r): ");
        scanf("%f",&r);

        si=(p*t*r)/100;
        ci=p*(pow(1+r/100,t)-1);
        printf("simple interest=%.3f\n", si);
        printf("compound interest=%.3f\n", ci);

    return 0;
}
