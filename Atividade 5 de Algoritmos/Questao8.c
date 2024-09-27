#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp;

   
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

	printf ("\n\n");

    for (i = 0; i < 10; i++) {  
        for (j = 0; j < 10 - i; j++) {  
        
            if (vetor[j] > vetor[j + 1]) {
              
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}

