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