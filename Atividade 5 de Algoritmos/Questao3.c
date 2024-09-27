#include <stdio.h>
#include <time.h>

int main () {
	
	unsigned int Q[20];
	int i, j, contador;
	
	srand(time(0));
	
	for (i = 0; i < 20; i++) {
		
		Q[i] = rand()%39;
	}
	
	for (i = 0; i < 20; i++) {
		
		contador = 0;
		for (j = 0; j < 20; j++) {
			
			if (Q[i] <= Q[j]) {
				
				contador++;
			}
		}
		
		if (contador == 20) {
			
			printf ("Menor valor: %d\nPosicao: %d\n\n", Q[i], i);
		}
	}
	
	return 0;
}
