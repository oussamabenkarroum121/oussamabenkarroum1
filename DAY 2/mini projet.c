#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

char titles[MAX_BOOKS][50];
char authors[MAX_BOOKS][50];
float prices[MAX_BOOKS];
int quantities[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        printf("Titre du livre : ");
        scanf(" %[^\n]", titles[bookCount]);
        printf("Auteur du livre : ");
        scanf(" %[^\n]", authors[bookCount]);
        printf("Prix du livre : ");
        scanf("%f", &prices[bookCount]);
        printf("Quantité en stock : ");
        scanf("%d", &quantities[bookCount]);
        bookCount++;
        printf("Livre ajouté avec succès !\n");
    } else {
        printf("Le stock est plein.\n");
    }
}

void displayBooks() {
    if (bookCount == 0) {
        printf("Aucun livre disponible.\n");
        return;
    }
    printf("\nLivres disponibles :\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n",
               titles[i], authors[i], prices[i], quantities[i]);
    }
}

void updateQuantity() {
    char title[50];
    printf("Titre du livre à mettre à jour : ");
    scanf(" %[^\n]", title);
    
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], title) == 0) {
            printf("Nouvelle quantité : ");
            scanf("%d", &quantities[i]);
            printf("Quantité mise à jour avec succès !\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

void deleteBook() {
    char title[50];
    printf("Titre du livre à supprimer : ");
    scanf(" %[^\n]", title);
    
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], title) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                strcpy(titles[j], titles[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                prices[j] = prices[j + 1];
                quantities[j] = quantities[j + 1];
            }
            bookCount--;
            printf("Livre supprimé avec succès !\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

void totalBooks() {
    int total = 0;
    for (int i = 0; i < bookCount; i++) {
        total += quantities[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);
}

int main() {
    int choice;
    do {
        printf("\nMenu :\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Mettre à jour la quantité d'un livre\n");
         printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres en stock\n");
        printf("6. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: updateQuantity(); break;
            case 4: deleteBook(); break;
            case 5: totalBooks(); break;
            case 6: printf("Au revoir !\n"); break;
            default: printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choice != 6);
    
    return 0;
 }
