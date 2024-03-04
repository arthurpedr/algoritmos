#include <stdio.h>
#include <math.h>

int main(){
	float altura, peso, imc;

	//solicitar a altura em metros
	printf("digite sua altura ");
	scanf("%f",&altura);
	
	//solicitar peso em kg
	printf("\n digite seu peso ");
	scanf("%f",&peso);
	
	//calcular o imc
	imc = peso/ (pow(altura, 2));
	
	//exibe o resultado
	printf("%.2f",imc);
	
	return 0;
	
}
