#include <stdio.h>
#include <math.h>
#include <locale.h>

    //FUN��O

double volume_esfera(float r){
	double res;
	res = (4.0/3.0)* M_PI * pow(r,3);
	return res;
}
int main(){
	setlocale(LC_ALL, "portuguese");
	double r,resultado;
	
	//SOLICITA O RAIO AO US�ARIO
	
	printf("Informe o valor do raio: ");
	scanf("%lf",&r);
	
	//INDENTIFICA SE O RAIO � NEGATIVO
	
	if(r < 0){
		printf("o raio da esfera n�o pode ser negativo.\n");
		return 1;
	}
	
	//CHAMA A FUN��O
	
	resultado = volume_esfera(r);
	printf("o volume da esfera �: %.2lf\n",resultado);
	
	return 0;
}