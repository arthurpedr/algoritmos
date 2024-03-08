#include <stdio.h>
int main(){
	int op;

//Seleção de
 printf("Escolha uma opção abaixo.\n");
 printf("Autonomo.\n");
 printf("agricultor.\n");
 printf("auxiliar.\n");
 printf("arquiteto.\n");
 printf("advogado.\n");
 printf("Digite o número correspondente á sua escolha.\n");
 scanf("%d", &op);

switch(op){
case 1:
	printf("Você escolheu Autonomo.\n");
	break;
case 2:
	printf("Você escolheu agricultor.\n");
	break;
case 3:
  printf("Você escolheu auxiliar.\n");
  break;
case 4:
	printf("Você escolheu arquiteto.\n");
	break;
case 5:
	printf("Você escolheu advogado.\n");
	break;
default:
	printf("opção inválida. por favor, escolha um número de 1 a 5.\n");
	break;

} while(op < 1 || op > 5);
	
	return 0;	
	
}