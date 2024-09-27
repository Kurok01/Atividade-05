#include <stdio.h>
#include <time.h>

int main () {
	
	int n, i;
	
	printf ("Digite o tamanho do vetor: ");
	scanf ("%d", &n);
	
	int A[n], B[n], Soma[n];
	
	srand (time(0));
	
	for (i = 0; i < n; i++) {
		
		A[i] = rand()%39;
		B[i] = rand()%39;
		
		printf ("A[%d]: %d\n", i, A[i]);
		printf ("B[%d]: %d\n", i, B[i]);
		
		printf ("\n");
	}
	
	printf ("\n");
	
	for (i = 0; i < n; i++) {
		
		Soma[i] = A[i] + B[i];
		
		printf ("Soma[%d]: %d\n", i, Soma[i]);
	}
	
	return 0;
}
