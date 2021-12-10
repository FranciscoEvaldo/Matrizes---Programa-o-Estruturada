/*4°) Faça um programa que preencha uma matriz 4x2 com valores inteiros, calcule e mostre dois vetores resultantes.
O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos.
Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.*/

#include <stdio.h>
#define TAM_L 2
#define TAM_C 4

void main(void)
{
    int mat [TAM_L][TAM_C], x[TAM_C], y[TAM_C];
    
    printf("Preencha a matriz de %dx%d elementos:\n", TAM_L, TAM_C);
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            printf("Mat[%d]x[%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nA matriz digita foi: \n");
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nO vetor resultante de número positivos é:\n");
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            if(mat[i][j] > 0){
                x[i] = mat[i][j];
                printf("%d\t", x[i]);
            }
        }
    }
    
    printf("\nO vetor resultante de número negativos é:\n");
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            if(mat[i][j] < 0){
                y[i] = mat[i][j];
                printf("%d\t", y[i]);
            }
        }
    }
}


