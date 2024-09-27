#include <stdio.h>
#include <time.h>

int main () {
	
	int VET[50];
	int i, j;
	
	srand(time(0));
	
	for (i = 0; i < 50; i++) {
		
		VET[i] = rand () % 61;
		
		printf ("VET[%d]: %d\n", i, VET[i]);
	}
	
	printf ("\n\n");
	
	for (i = 0; i < 50; i++) {
		for(j = i + 1; j < 50; j++) {
		
			if (VET[i] == VET[j]) {
				
				printf ("VET[%d] e VET[%d] sao iguais a %d\n\n", i, j, VET[i]);
			}
		}	
	}
	
	return 0;
}
