#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fehrenhite , celcius;
   printf("\n enter the celcius to get fehrenhite: ");

       scanf("%d%d,&fehrenhite,&celcius");
       fehrenhite=((celcius*9)/5)+32;
       printf("\n\n temperature in celsius is: %f",fehrenhite);
    return 0;
}
