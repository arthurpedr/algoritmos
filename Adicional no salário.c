#include <stdio.h>
int main(){
	float salario;
	
	//solicitar o sal�rio da pessoa
	 printf("digite seu sal�rio: ");
	 scanf("%f", &salario);
	 
	 //verificar se o sal�rio atende ao requisito
	 if(salario >= 2000){
	 	
	 	//adiciona 1000 reais ao sal�rio
		 salario += 1000;
		 printf("Novo salario: R$ %.2f\n", salario);
	 }else{
		 printf("o salario n�o atende aos requisitos.\n");
	 }
	  return 0;
	 }