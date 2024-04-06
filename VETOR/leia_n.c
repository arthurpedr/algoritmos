#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int vetor[10];
	int x;
	
	//INFORME OS NÚMEROS
	
	for(x = 0; x < 10; x++){
		printf("Informe os números: ");
		scanf("%d",&vetor[x]);
	}
	
	//OPERAÇÃO
	
	for(x = 0; x < 10; x = x +1){
		printf("\n os números são: %d",vetor[x]);
	}
	return 0;	
	
}