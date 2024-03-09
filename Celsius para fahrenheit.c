#include <stdio.h>
int main(){
float celsius, fahrenheit;
		
	//Solicita a temperatura em celsius
	printf("digite a temperatura em celsius: ");
	scanf("%f",&celsius);
	
	//Coverte celsius para fahrenheit
	fahrenheit = (celsius * 9 / 5)+ 32;
	
	//Mostra o resultado da conversão
	printf("%.2f celsius equivalem a %.2f fahrenheit.\n",celsius,fahrenheit);
	
	return 0;
		
}