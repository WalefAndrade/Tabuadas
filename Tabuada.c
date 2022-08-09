#include <stdio.h>
#include <stdlib.h>

int main(){

	int tabuada, i = 0;
	int multiplicador; 
	
	printf("Digite a tubuada que voce deseja:\n");
	scanf("%d", &tabuada);
	printf("Informe até qual multiplicador:\n");
	scanf("%d", &multiplicador);
	
	while (i <= multiplicador){
		printf("\n %d X %d = %d", tabuada, i, tabuada * i);
		i++;
	}
	
	return 0;
}