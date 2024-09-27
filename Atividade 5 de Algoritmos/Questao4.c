#include <stdio.h>

int main () {
	
	int A[10], M[10], i, x;
	
	for (i = 0; i < 10; i++) {
		
		printf ("Digite o valor %d: ", i+1);
		scanf ("%d", &A[i]);
	}
	
	printf ("Digite um valor para x: ");
	scanf ("%d", &x);
	
	printf ("\n\n");
	
	for (i = 0; i < 10; i++) {
		
		printf ("M[%d] = %d\n", i, A[i] * x);
	}
	
	return 0;
}
