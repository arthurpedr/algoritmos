#include <stdio.h>
#include <locale.h>

 int main(){
 	
 setlocale (LC_ALL, "portuguese");	
int vetor[5], x;
int soma=0;

//DECIS�O DOS N�MEROS

for(x=0; x < 5; x = x +1){
printf("informe os n�meros:");
	scanf("%d",&vetor[x]);
	
//OPERA��O
	
 soma += vetor[x];
}
 printf("\n a soma dos n�meros �: %d",soma);
	
return 0;
 }