/* 2°) Escreva um programa que recebe uma matriz 2x3 do usuário e diga qual o maior número e qual o menor número da matriz.*/

#include <stdio.h>
#define TAM_L 2
#define TAM_C 3

void main(void)
{
    int mat [TAM_L][TAM_C], maior_n = 0, menor_n = 0;
    
    printf("Preencha a matriz de %dx%d elementos:\n", TAM_L, TAM_C);
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            printf("Mat[%d]x[%d] = ", i, j);
            scanf("%d", &mat[i][j]);
            if(i == 0){
                maior_n = menor_n = mat[i][j];
            }
        }
    }
    
    printf("\nA matriz digita foi: \n");
    
    for(int i = 0; i < TAM_L; i++){
        for(int j = 0; j < TAM_C; j++){
            printf("%d\t", mat[i][j]);
            
            if(mat[i][j] > maior_n){
                maior_n = mat[i][j];
            }
            else if(mat[i][j] < menor_n){
                menor_n = mat[i][j];
            }
        }
        printf("\n");
    }
    
    printf("\nO maior número é: %d ", maior_n);
    printf("\nO menor número é: %d ", menor_n);
}

