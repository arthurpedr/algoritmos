#include <stdio.h>
#include <locale.h>

//FUN��O

void mensagem(int num){
	if(num > 0){
		printf("\n � positivo");
	}
	if(num < 0){
		printf("\n � negativo");
	}if(num == 0){
		printf("\n � igual a zero");
	}	
}
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	
	//SOLICITA UM N�MERO
	
	printf("informe o numero:");
	scanf("%d",&n);
	
	//CHAMA A FUN��O
	
	mensagem(n);
	
	return 0;
}