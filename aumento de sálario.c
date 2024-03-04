#include<stdio.h>

int main(){
  float salario, novo_salario;

  //Leitura do sálario
  printf("digite o sálario do funcionário: ");
  scanf("%f",&salario);

  //Calcular o novo sálario com aumento de 15%
  novo_salario = salario * 1.15;

  //Mostra o novo sálario
  printf("novo sálario com aumento é: R$%.2f", novo_salario);
	
return 0;	
		
}