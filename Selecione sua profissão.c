#include <stdio.h>
int main(){
	int op;

//Sele��o de
 printf("Escolha uma op��o abaixo.\n");
 printf("Autonomo.\n");
 printf("agricultor.\n");
 printf("auxiliar.\n");
 printf("arquiteto.\n");
 printf("advogado.\n");
 printf("Digite o n�mero correspondente � sua escolha.\n");
 scanf("%d", &op);

switch(op){
case 1:
	 printf("Voc� escolheu Autonomo.\n");
	 break;
case 2:
	printf("Voc� escolheu agricultor.\n");
	break;
case 3:
    printf("Voc� escolheu auxiliar.\n");
    break;
case 4:
	printf("Voc� escolheu arquiteto.\n");
	break;
case 5:
	printf("Voc� escolheu advogado.\n");
	break;
default:
	printf("op��o inv�lida. por favor, escolha um n�mero de 1 a 5.\n");
	break;

} while(op < 1 || op > 5);
	
	return 0;	
	
}