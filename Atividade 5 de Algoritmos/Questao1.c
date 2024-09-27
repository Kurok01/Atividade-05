#include <stdio.h>

int main () {
	
	float nota[20], media;
	int i, acimaMedia;
	
	for (i = 0; i < 20; i++) {
		
		printf ("Digite a nota %d: ", i+1);
		scanf ("%f", &nota[i]);
		
		media += nota[i];
	}
	
	media /= 20;
	
	for (i = 0; i < 20; i++) {
		
		if (nota[i] > media) {
		acimaMedia++;
		}
	}
	
	printf ("Media: %.2f\n\n%d alunos tiveram nota acima da media.", media, acimaMedia);
	
	return 0;
}
