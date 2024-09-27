#include <stdio.h>

int recebeMeioPonteiro (int *valor1, int valor2) {
	
	*valor1 *= 4;
	valor2 *= 2;
	
	return valor2;
}

void recebePonteiro (int *valor1, int *valor2) {
	
	int aux = 0;
	
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
	
	*valor2 = recebeMeioPonteiro(valor1, *valor2);
}

int main () {
	
	int valor1 = 10, valor2 = 4, *ptrValor1 = &valor1;
	
	recebePonteiro (ptrValor1, &valor2);
	
	printf ("%d %d", valor1, valor2);
		
	return 0;
}
