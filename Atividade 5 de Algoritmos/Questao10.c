#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
	
	int vetor[20], novoVetor[20], valor;
	int i;
	
	srand(time(0));
	
	for (i = 0; i < 20; i++) {
		
		vetor[i] = rand () % 41;
		
		printf ("vetor[%d]: %d\n", i, vetor[i]);
	}
	
	printf ("\n");
	
	printf ("Digite um valor: ");
	scanf ("%d", &valor);
	
	for (i = 0; i < 20; i++) {
		
		if (vetor[i] == valor) {
			
			printf ("vetor[%d]: %d\n\n", i, vetor[i]);
		}
	}
	
	for (i = 0; i < 20; i++) {
		
		if (vetor[i] != valor) {
			
			novoVetor[i] = vetor[i];
			
			printf ("novoVetor[%d]: %d\n", i, novoVetor[i]);
		}
	}
	
	return 0;
}
