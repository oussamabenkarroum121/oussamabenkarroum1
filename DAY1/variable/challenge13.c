#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n >> 1);
    }
    printf("%d", n & 1);
}

int main() {
    int number;

    // Demande à l'utilisateur d'entrer un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &number);

    // Affichage de la valeur en hexadécimal
    printf("Valeur hexadécimale : %X\n", number);

    // Affichage de la valeur en binaire
    printf("Valeur binaire : ");
    printBinary(number);
    printf("\n");

    return 0;
}
