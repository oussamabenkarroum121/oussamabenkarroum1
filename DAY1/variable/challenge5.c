#include <stdio.h>
 int main()
{
    float c ;
    printf("entre la temperature en celius:");
    scanf("%f",&c);
    if (c<0){
        printf("l'etat du l'eau dans cette temperature est : solide");
    }else if (c<100){
        printf("l'etat du l'eau dans cette temperature est: liquide");
    }else {
        printf("l'etat du l'eau dans cette temperature est : gaz");
    }

    return 0;
}

