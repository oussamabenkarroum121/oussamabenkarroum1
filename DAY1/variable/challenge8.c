#include <stdio.h>
#include <math.h>

int main() {
  
    double x1, y1, z1, x2, y2, z2;
    double distance;
    
     printf("Entrez les coordonnées du point A (x1, y1, z1) : ");
     scanf("%lf %lf %lf", &x1, &y1, &z1);
    
    printf("Entrez les coordonnées du point B (x2, y2, z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);


    distance = (pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

   
    printf("La distance entre les points A et B est : %.2f\n", distance);
    return 0;
}