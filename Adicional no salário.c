#include <stdio.h>
int main(){
	float salario;
	
	//solicitar o salário da pessoa
	 printf("digite seu salário: ");
	 scanf("%f", &salario);
	 
	 //verificar se o salário atende ao requisito
	 if(salario >= 2000){
	 	
	 	//adiciona 1000 reais ao salário
		 salario += 1000;
		 printf("Novo salario: R$ %.2f\n", salario);
	 }else{
		 printf("o salario não atende aos requisitos.\n");
	 }
	  return 0;
	 }