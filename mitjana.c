#include <stdio.h>

int main() {
	float suma=0.0;
	float mitjana=0.0;
	float nou_valor;
	int numero_repeticions=0;
	char consulta='n';
	
	while(consulta=='s') {
		printf("Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar (s/n): ");
		scanf("%s",&consulta); 
	}
	mitjana=suma/numero_repeticions;
	printf("La mitjana resultant és: %.2f\n",mitjana);	
	return 0;
}
