#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
    int matriz[3][3], matrizDeterminante[3][5], determinante = 0;
    int i, j;

    srand(time(0)); 



    printf("Matriz original\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 21; 

      
            if (matriz[i][j] < 10) {
                printf("%d  ", matriz[i][j]);
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("\nMatrizDeterminante 3x5:\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
        	
            if (j < 3) {
            	
                matrizDeterminante[i][j] = matriz[i][j]; 
                
            } else {
            	
                matrizDeterminante[i][j] = matriz[i][j - 3]; 
            }

      
            if (matrizDeterminante[i][j] < 10) {
            	
                printf("%d  ", matrizDeterminante[i][j]);
                
            } else {
            	
                printf("%d ", matrizDeterminante[i][j]);
            }
        }
        
        printf("\n");
    }

   
    for (i = 0; i < 3; i++) {
      
        determinante += matrizDeterminante[0][i] * matrizDeterminante[1][i+1] * matrizDeterminante[2][i+2];
   
        determinante -= matrizDeterminante[0][i+2] * matrizDeterminante[1][i+1] * matrizDeterminante[2][i];
    }


    printf("\nDeterminante = %d\n", determinante);

    return 0;
}

