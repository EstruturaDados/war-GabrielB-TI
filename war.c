#include <stdio.h>
#include <string.h>

#define TOTAL_TERRITORIOS 5


struct Territorio {
    char nome[50];
    char corExercito[30];
    int numTropas;
};

int main() {
    struct Territorio territorios[TOTAL_TERRITORIOS];
    int i;

    printf("=== Cadastro Inicial dos Territórios ===\n\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);

        printf("Nome do território: ");
        fgets(territorios[i].nome, 50, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0; // remove o \n

        printf("Cor do exército dominante: ");
        fgets(territorios[i].corExercito, 30, stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = 0;

        printf("Número de tropas: ");
        scanf("%d", &territorios[i].numTropas);
        getchar(); // limpa o ENTER do buffer

        printf("\n");
    }

    printf("\n=== Estado Atual do Mapa ===\n");
    printf("%-20s %-20s %-10s\n", "TERRITÓRIO", "COR DO EXÉRCITO", "TROPAS");
    printf("-----------------------------------------------------------\n");

    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("%-20s %-20s %-10d\n",
               territorios[i].nome,
               territorios[i].corExercito,
               territorios[i].numTropas);
    }

    return 0;
}
