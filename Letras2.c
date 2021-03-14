#include <stdio.h>
#include <string.h>

void quantidade(char a, char b[], int c){

	int i, encontrados = 0;

	for(i=0; i < c; i++){

		if(b[i] == a){
			encontrados++;
		}

	}
	if (encontrados >= 1)
	{
		printf("\nO caracter \"%c\" aparece %d vezes!\n\n", a, encontrados);
	}else
	{
		printf("\nO caracter \"%c\" nao aparece\n\n", a);
	}
	
	
	
}

int main(){

	char a, b[20];
	   int tamanho;
	     printf("\nIntroduza uma string:\n\n");
	     gets(b);
    printf("\nIntroduza um caracter:\n");	
	     scanf("%c", &a);
	         tamanho = strlen(b);
	             quantidade(a,b,tamanho);
	return 0;
}