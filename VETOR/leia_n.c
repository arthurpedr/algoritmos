#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int vetor[10];
	int x;
	
	//INFORME OS N�MEROS
	
	for(x = 0; x < 10; x++){
		printf("Informe os n�meros: ");
		scanf("%d",&vetor[x]);
	}
	
	//OPERA��O
	
	for(x = 0; x < 10; x = x +1){
		printf("\n os n�meros s�o: %d",vetor[x]);
	}
	return 0;	
	
}