#include <stdio.h>
#include <locale.h>

 int main(){
 	
 setlocale (LC_ALL, "portuguese");	
int vetor[5], x;
int soma=0;

//DECISÃO DOS NÚMEROS

for(x=0; x < 5; x = x +1){
printf("informe os números:");
	scanf("%d",&vetor[x]);
	
//OPERAÇÃO
	
 soma += vetor[x];
}
 printf("\n a soma dos números é: %d",soma);
	
return 0;
 }