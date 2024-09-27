  challenge 5 
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

challenge 3
#include <stdlib.h>

int main()
{
   float kilometres , yards ;
   printf("donne kilometres en yards");
   scanf("%f",&kilometres);
   yards= kilometres * 1093,61;
   printf("le resultat est :%f",yards);
    return 0;
}
 
 challenge  4
 #include <stdlib.h>

int main()
{
  float kilometres , ms ;
  printf("donne kilometres en m_par_s");
  scanf("%f",&kilometres);
  ms= kilometres * 0,27778;
  printf("le resultat est : %f",ms);
    return 0;
}

 challege 6
#include <stdio.h>

 int main()
 {
   int a , b ; 
  printf("veuiller entrer la valeur de a:");
  scanf("%d",&a);
  printf("veuillez entrer la valeur de b :");
  scanf("%d",&b);
  printf(" A + B = %d \n",a+b);
  printf(" A -B = %d \n",a-b);
  printf(" A*B = %d \n",a*b);
  if (b!=0)
  printf("A/B = %d \n",a/b);
  else 
  printf("error");
  
return 0 ;ki}

challenge 2
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

 challenge 1 
#include <stdio.h>
 int main(){
     char prenom [20] ;
     char nom [20] ;
     char sex ;
     char email[20];
     printf("entrer le prenom:");
     scanf("%s",&prenom );
     printf("entrer le nom:");
     scanf("%s",&nom );
     printf("entrer le sex :");
     scanf(" %c",&sex  );
     printf("entrer l'email : ");
     scanf("%s",&email );
    return 0;
}

challenge 7 

#include <stdio.h>
#include <math.h>

int main() {
    double rayon, volume;

    // Demander à l'utilisateur de saisir le rayon
    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);

    // Calculer le volume
    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);

    // Afficher le résultat
    printf("Le volume de la sphère avec un rayon de %.2lf est : %.2lf\n", rayon, volume);

    return 0;
}

challenge 8

#include <stdio.h>
#include <math.h>

int main() {
  
    double x1, y1, z1, x2, y2, z2;
    double distance;
    
     printf("Entrez les coordonnées du point A (x1, y1, z1) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    
    printf("Entrez les coordonnées du point B (x2, y2, z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);


    distance = pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

   
    printf("La distance entre les points A et B est : %.2f\n", distance);

    return 0;
}0
 challenge 11
 #include <stdio.h>

int main() {
    double longueur, largeur, surface;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    surface = longueur * largeur;

    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}

challenge 12
#include <stdio.h>

int main() {
    int nombre;

  
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);


    int chiffre1 = nombre / 1000;         // Premier chiffre
    int chiffre2 = (nombre / 100) % 10;   // Deuxième chiffre
    int chiffre3 = (nombre / 10) % 10;    // Troisième chiffre
    int chiffre4 = nombre % 10;            // Quatrième chiffre

    printf("L'inverse du nombre est : %d%d%d%d\n", chiffre4, chiffre3, chiffre2, chiffre1);

    return 0;
}

challenge 13






