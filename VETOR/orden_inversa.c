#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[5];
	int x;
	
	// DECIS�O DOS N�MEROS
	
	for(x = 0; x < 5; x = x +1){
		printf("informe os n�meros: ");
		scanf("%d",&vetor[x]);
	}
	
	//OPERA��O 
	
	for(x = 4; x >= 0; x = x -1){
		printf("\n os n�meros s�o: %d",vetor[x]);
	}
	return 0;
}