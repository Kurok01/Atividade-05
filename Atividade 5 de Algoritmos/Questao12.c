#include <stdio.h>
#include <time.h>

int main () {
	
	int vetor[30], i, numero, contador = 0;
	
	srand(time(0));
	
	for (i = 0; i < 30; i++) {
		
		vetor[i] = rand () % 51;
		
		printf ("Vetor[%d]: %d\n", i, vetor[i]);
	}
	
	printf ("\nDigite um valor: ");
	scanf ("%d", &numero);
	
	for (i = 0; i < 30; i++) {
		
		if (vetor[i] == numero) {
			
			contador++;
		}
	}
	
	printf ("O numero digitado aparece %d vez(es) no vetor.", contador);
	
	return 0;
}
