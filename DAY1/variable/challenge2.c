#include <stdio.h>

int main()
{
    float celsius , kelvin ;
    printf("donne la tomperature en celsuis");
    scanf("%f",&celsius);
     kelvin= celsius + 273,15;
    printf("le resultat est :%.2f",kelvin);
    return 0;
}