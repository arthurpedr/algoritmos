#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float quantidade, valorf;
	
	printf("Digite quantas ma��s foram compradas: ");
	scanf("%f",&quantidade);
	
	if(quantidade < 12){
		valorf = quantidade * 0.30;
		printf("O valor da compra �:%2.f ",valorf);
		
	}else{
		valorf = quantidade * 0.25;
		printf("O valor da compra �:%.2f",valorf);
	}
		
	return 0;
	
}