#include <stdio.h>
 int main(){
float valor_reais, valor_dolares;
float taxa = 3.45; 

// Solicita ao usu�rio um valor em reais
printf("digite a quantidade de dinheiro: ");
 if (scanf("%f", &valor_reais) != 1 || valor_reais < 0){
 	printf("Entrada invalida, insira um valor positivo.\n");
  return 0;
 }
// Convers�o de reais para d�lares
valor_dolares = (valor_reais / taxa);

// Resultado final
printf("aproximadamente US$%.2f.",valor_dolares);

 return 0;
 
}