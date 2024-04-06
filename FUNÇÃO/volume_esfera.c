#include <stdio.h>
#include <math.h>
#include <locale.h>

    //FUNÇÃO

double volume_esfera(float r){
	double res;
	res = (4.0/3.0)* M_PI * pow(r,3);
	return res;
}
int main(){
	setlocale(LC_ALL, "portuguese");
	double r,resultado;
	
	//SOLICITA O RAIO AO USÚARIO
	
	printf("Informe o valor do raio: ");
	scanf("%lf",&r);
	
	//INDENTIFICA SE O RAIO É NEGATIVO
	
	if(r < 0){
		printf("o raio da esfera não pode ser negativo.\n");
		return 1;
	}
	
	//CHAMA A FUNÇÃO
	
	resultado = volume_esfera(r);
	printf("o volume da esfera é: %.2lf\n",resultado);
	
	return 0;
}