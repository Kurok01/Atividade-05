#include <stdio.h>

int main() {
    int vetor[11];
    int i, j, aux, novoValor;

 
    for (i = 0; i < 10; i++) {
    	
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 9; i++) {  
        for (j = 0; j < 9 - i; j++) {
        	
            if (vetor[j] > vetor[j + 1]) {
            	
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    printf("\nDigite mais um valor: ");
    scanf("%d", &novoValor);

    
    i = 9;  
    while (i >= 0 && vetor[i] > novoValor) {
        vetor[i + 1] = vetor[i];  
        i--;
    }
    vetor[i + 1] = novoValor;  

   
    printf("\nVetor atualizado com o novo valor:\n");
    for (i = 0; i < 11; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}
