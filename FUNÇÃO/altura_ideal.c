#include <stdio.h>

//FUNÇÃO

float peso1( float alt, char sexo){
	float p;
	if(sexo == 'M'){
	p= 72.7 * alt -58;
	
	}else{
	p= 62.1 * alt -44.7;
	
		
	}
	return p;	
	}
int main(){
	float altura, peso;
	char s;
	
	//INFORMAÇÕES DO USÚARIO
	
	    printf("informe sua altura: ");
	    scanf("%f",&altura);
	    
	    printf("informe seu sexo: ");
	    scanf("%c",&s);
	    
    //OPERAÇÃO
    
	    peso = peso1(altura,s);
	    printf("seu peso ideal e: %2.f",peso);
	    
  return 0;
}