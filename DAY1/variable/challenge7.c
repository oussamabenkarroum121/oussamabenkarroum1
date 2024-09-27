#include <stdio.h>
#include <math.h>

int main(){
    double rayon , volume = 0;
    double PI = 3.14;

  
    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);


    volume = (4.0 / 3.0) * PI * pow(rayon, 3);

    
    printf("Le volume de la sphère avec un rayon de %.2lf est : %.2lf\n", rayon, volume);

    return 0;
}