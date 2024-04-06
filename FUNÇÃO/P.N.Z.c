#include <stdio.h>
#include <locale.h>

//FUNÇÃO

void mensagem(int num){
	if(num > 0){
		printf("\n é positivo");
	}
	if(num < 0){
		printf("\n é negativo");
	}if(num == 0){
		printf("\n é igual a zero");
	}	
}
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	//SOLICITA UM NÚMERO
	
	printf("informe o numero:");
	scanf("%d",&n);
	
	//CHAMA A FUNÇÃO
	
	mensagem(n);
	
	return 0;
}