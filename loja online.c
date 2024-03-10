#include <stdio.h>
#include <stdlib.h>

void comprarRoupa(int opcao) {
switch(opcao) {
	
//Escolhas
case 1:
printf("Você escolheu uma camiseta.\n");
break;
case 2:
printf("Você escolheu uma calça jeans.\n");
break;
case 3:
printf("Você escolheu um tênis.\n");
break;
case 4:
printf("Você escolheu um moletom.\n");
break;
case 5:
printf("Você escolheu um casaco.\n");
break;
default:
printf("Opção inválida. Por favor, escolha novamente.\n");
}
}

int main(){
    int opcao;
    char escolha;
    char formaPagamento;

//Interface
do {
printf("Bem-vindo à nossa loja!\n");
printf("Escolha uma opção de roupas:\n");
printf("1. Camiseta\n");
printf("2. Calça jeans\n");
printf("3. Tênis\n");
printf("4. Moletom\n");
printf("5. Casaco\n");
scanf("%d", &opcao);

//opção de voltar a interface
comprarRoupa(opcao);
printf("Deseja escolher outra peça? (s/n): ");
getchar();

 // Limpar o buffer do teclado
scanf("%c", &escolha);

if (escolha != 's' && escolha != 'S') {
printf("Deseja pagar em dinheiro (D), cartão (C) ou pix (P)? ");
getchar();

 // Limpar o buffer do teclado
scanf("%c", &formaPagamento);

//Opções de pagamento
switch(formaPagamento) {
case 'D':
case 'd':
printf("Pagamento em dinheiro selecionado.\n");
break;
case 'C':
case 'c':
printf("Pagamento em cartão selecionado.\n");
break;
case 'P':
case 'p':
printf("Pagamento em pix selecionado.\n");
break;
default:
printf("Opção inválida de pagamento. Tente novamente.\n");
}
}
} while (escolha == 's' || escolha == 'S');
printf("Obrigado por comprar conosco!\n");

return 0;
}