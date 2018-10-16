#include "putere_matrice.h"

void citire(int matrice[100][100], int lenght){
        int iterator_1;
        int iterator_2;

            for(iterator_1 = 1; iterator_1 <= lenght; iterator_1 ++){
                for(iterator_2 = 1; iterator_2 <= lenght; iterator_2++){
                    printf("Introduceti a[%d][%d]=", iterator_1, iterator_2);
                    scanf("%d", &matrice[iterator_1][iterator_2]);
                }
            }
}

void afisare(int matrice[100][100], int lenght){
        int iterator_1;
        int iterator_2;

            for(iterator_1 = 1; iterator_1 <= lenght; iterator_1 ++){
                for(iterator_2 = 1; iterator_2 <= lenght; iterator_2++){
                        printf("%d ", matrice[iterator_1][iterator_2]);
                }
                printf("\n");
            }
}

void ridicare_putere(int matrice[100][100], int lenght, int n){
        int iterator_1;
        int iterator_2;
        int iterator_3;
        int iterator_4;
        int aux[100][100];
        int aux_2[100][100];

            iterator_4 = 2;

            for(iterator_1 = 1; iterator_1 <= lenght; iterator_1 ++){
                for(iterator_2 = 1; iterator_2 <=lenght; iterator_2++){
                        aux[iterator_1][iterator_2] = matrice[iterator_1][iterator_2];
                }
            }

            for(iterator_1 = 1; iterator_1 <= lenght; iterator_1 ++){
                for(iterator_2 = 1; iterator_2 <=lenght; iterator_2++){
                        aux_2[iterator_1][iterator_2] = 0;
                }
            }

            while(iterator_4 <= n){
                for(iterator_1 = 1; iterator_1 <= lenght; iterator_1 ++){
                    for(iterator_2 = 1; iterator_2 <=lenght; iterator_2++){
                            aux_2[iterator_1][iterator_2] = 0;
                            for(iterator_3 = 1; iterator_3 <= lenght; iterator_3++){
                                aux_2[iterator_1][iterator_2] = aux_2[iterator_1][iterator_2] + aux[iterator_1][iterator_3]*matrice[iterator_3][iterator_2];
                            }
                    }
                }

                for(iterator_1 = 1; iterator_1 <= lenght; iterator_1 ++){
                    for(iterator_2 = 1; iterator_2 <=lenght; iterator_2++){
                            aux[iterator_1][iterator_2] = aux_2[iterator_1][iterator_2];
                    }
                }

                iterator_4++;
            }

            afisare(aux_2,lenght);
}
