/* 1°) Escreva um programa que recebe um matriz 3x4 do usuário e escreve a média dos valores na matriz. */

#include <stdio.h>
#define TAM_L 3
#define TAM_C 4

void main(void)
{
    int mat [TAM_L][TAM_C];
    float soma = 0.0;
    
    printf("Preencha a matriz de %dx%d elementos:\n", TAM_L, TAM_C);
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            printf("Mat[%d]x[%d] = ", i, j);
            scanf("%d", &mat[i][j]);
            soma = soma + mat[i][j];
        }
    }
    
    printf("\nA matriz digita foi: \n");
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nE a média dos valores da matriz é: %0.2f", soma/(TAM_L*TAM_C));
}

