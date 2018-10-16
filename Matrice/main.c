#include "putere_matrice.h"

int main()
{
    int matrice[100][100];
    int lenght;
    int n;

        printf("Introduceti marimea matricei patratice:");
        scanf("%d", &lenght);
        printf("Introduceti puterea la care va fi ridicata matricea:");
        scanf("%d", &n);

        citire(matrice,lenght);
        ridicare_putere(matrice,lenght,n);
}
