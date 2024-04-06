#include <stdio.h>
char conceito(float media){
	char letra;
	
//FUNÇÃO

	if(media >= 0 && media <= 4.9){
		letra = 'D';
	}
	if(media >= 5 && media <= 6.9){
		letra = 'C';
	}
	if(media >= 7 && media <= 8.9){
		letra = 'B';
	}if(media >= 9 && media <= 10){
		letra = 'A';
	}
	return letra;
}	
int	main(){
float m;
char l;

//OPERAÇÃO

printf("informe sua media: ");
scanf("%f",&m);

l = conceito(m);
printf("seu conceito foi: %c",l);	

return 0;		
}