#include<stdio.h>

int main(){
  float salario, novo_salario;

  //Leitura do s�lario
  printf("digite o s�lario do funcion�rio: ");
  scanf("%f",&salario);

  //Calcular o novo s�lario com aumento de 15%
  novo_salario = salario * 1.15;

  //Mostra o novo s�lario
  printf("novo s�lario com aumento �: R$%.2f", novo_salario);
	
return 0;	
		
}