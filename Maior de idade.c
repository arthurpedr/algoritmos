#include <stdio.h>

int main(){
	int idade;
	
	//Solicitar a idade
	printf("digite sua idade: ");
	scanf("%d",&idade);
	
	//Verificar se é maior de idade
	     if(idade >= 18){
	       printf("\nMaior de idade.");
		 }
	   else{
	   	  printf("\nMenor de idade.");	     
 }
 return 0;
}