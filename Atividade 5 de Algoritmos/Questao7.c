#include <stdio.h>
#include <time.h>

int main () {
	
	float temperatura[365], temperaturaMedia = 0, menorTemperatura, maiorTemperatura;
	int i, abaixoMedia = 0;
	
	srand(time(0));

	for (i = 0; i < 365; i++) {
		
		temperatura[i] = rand() % 49;
		temperaturaMedia += temperatura[i];
	}

	temperaturaMedia /= 365;

	menorTemperatura = temperatura[0];
	maiorTemperatura = temperatura[0];

	for (i = 0; i < 365; i++) {
		
		if (temperatura[i] < menorTemperatura) {
			menorTemperatura = temperatura[i];
		}

		if (temperatura[i] > maiorTemperatura) {
			maiorTemperatura = temperatura[i];
		}

		if (temperatura[i] < temperaturaMedia) {
			abaixoMedia++;
		}
	}

	printf("Menor temperatura do ano: %.2f\n", menorTemperatura);
	printf("Maior temperatura do ano: %.2f\n", maiorTemperatura);
	printf("Temperatura media anual: %.2f\n", temperaturaMedia);
	printf("%d dias tiveram a temperatura abaixo da media anual.\n", abaixoMedia);

	return 0;
}

