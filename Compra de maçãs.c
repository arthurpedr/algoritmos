#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float quantidade, valorf;
	
	printf("Digite quantas maçãs foram compradas: ");
	scanf("%f",&quantidade);
	
	if(quantidade < 12){
		valorf = quantidade * 0.30;
		printf("O valor da compra é:%2.f ",valorf);
		
	}else{
		valorf = quantidade * 0.25;
		printf("O valor da compra é:%.2f",valorf);
	}
		
	return 0;
	
}