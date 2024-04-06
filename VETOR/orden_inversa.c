#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[5];
	int x;
	
	// DECISÃO DOS NÚMEROS
	
	for(x = 0; x < 5; x = x +1){
		printf("informe os números: ");
		scanf("%d",&vetor[x]);
	}
	
	//OPERAÇÃO 
	
	for(x = 4; x >= 0; x = x -1){
		printf("\n os números são: %d",vetor[x]);
	}
	return 0;
}