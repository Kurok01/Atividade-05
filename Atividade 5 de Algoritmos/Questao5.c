#include <stdio.h>
#include <time.h>

int main () {
	
	int vetor [20];
	int i;
	
	srand (time(0));
	
	for (i = 0; i < 20; i++) {
		
		vetor[i] = rand()%39;
		
		printf ("Vetor[%d]: %d\n", i, vetor[i]);
	}
	
	printf ("\n\n");
	
	for (i = 19; i >= 0; i--) {
	
			printf ("Vetor[%d]: %d\n", i, vetor[i]);
	}
	
	return 0;
}
