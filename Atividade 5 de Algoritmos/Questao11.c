#include <stdio.h>
#include <time.h>
int main () {
	
	int V1[15], V2[15];
	int i, contador = 0;
		
	srand(time(0));

	for (i = 0; i < 15; i++) {
		
		V1[i] = rand () % 21;
		V2[i] = rand () % 21;
		
		if (V1[i] == V2[i]) {
			
			contador++;
		}
		
		printf ("V1[%d]: %d\n", i, V1[i]);
		printf ("V2[%d]: %d\n\n", i, V2[i]);
	}
	
	printf ("O vetor V1 e V2 possuem %d numero(s) igual(is) na(s) mesma(s) posicao(oes).", contador);
	
	return 0;
}
