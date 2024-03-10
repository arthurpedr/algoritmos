#include <stdio.h>
#include <stdlib.h>

void comprarRoupa(int opcao) {
switch(opcao) {
	
//Escolhas
case 1:
printf("Voc� escolheu uma camiseta.\n");
break;
case 2:
printf("Voc� escolheu uma cal�a jeans.\n");
break;
case 3:
printf("Voc� escolheu um t�nis.\n");
break;
case 4:
printf("Voc� escolheu um moletom.\n");
break;
case 5:
printf("Voc� escolheu um casaco.\n");
break;
default:
printf("Op��o inv�lida. Por favor, escolha novamente.\n");
}
}

int main(){
    int opcao;
    char escolha;
    char formaPagamento;

//Interface
do {
printf("Bem-vindo � nossa loja!\n");
printf("Escolha uma op��o de roupas:\n");
printf("1. Camiseta\n");
printf("2. Cal�a jeans\n");
printf("3. T�nis\n");
printf("4. Moletom\n");
printf("5. Casaco\n");
scanf("%d", &opcao);

//op��o de voltar a interface
comprarRoupa(opcao);
printf("Deseja escolher outra pe�a? (s/n): ");
getchar();

 // Limpar o buffer do teclado
scanf("%c", &escolha);

if (escolha != 's' && escolha != 'S') {
printf("Deseja pagar em dinheiro (D), cart�o (C) ou pix (P)? ");
getchar();

 // Limpar o buffer do teclado
scanf("%c", &formaPagamento);

//Op��es de pagamento
switch(formaPagamento) {
case 'D':
case 'd':
printf("Pagamento em dinheiro selecionado.\n");
break;
case 'C':
case 'c':
printf("Pagamento em cart�o selecionado.\n");
break;
case 'P':
case 'p':
printf("Pagamento em pix selecionado.\n");
break;
default:
printf("Op��o inv�lida de pagamento. Tente novamente.\n");
}
}
} while (escolha == 's' || escolha == 'S');
printf("Obrigado por comprar conosco!\n");

return 0;
}