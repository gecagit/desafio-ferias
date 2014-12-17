#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*

Programa com intuito de criptografar mensagens utilizando a Cifra de César.

Desenvolvido por Paulo Kreft, com a ajuda do Eduardo Mendes na simplificação do código.
Qualquer dúvida sobre o código favor me enviar um e-mail, paulo.kreft@gmail.com

*/

#define TAM 255



// Variaveis globais

char palavra[TAM];
int i;    

// Função que criptografa a mensagem
void cripto()
{
	setlocale(LC_ALL, "Portuguese");


	printf("\n\nEntre com o texto a ser criptografado: ");
    gets(palavra);
	strupr(palavra);
	fflush(stdin);    
    	
	printf("\n\nO texto criptografado é: ");
		
	for ( i = 0; i < (int) strlen(palavra); i++ )
	{
	 	palavra[i] = (int) palavra[i] + 3;
	 	if ( palavra[i] > 90 )
	 	{
	 		palavra[i] = 65 + 2;
		}
		if ( palavra[i] != 35 )
	 	{
	 		printf("%c", palavra[i]);
		}
	}	
	menu();
}

// Função que descriptografa a mensagem
void descripto()
{
		printf("\n\nEntre com o texto criptografado: ");
    	gets(palavra);
		strupr(palavra);    
    	
		printf("\n\nO texto descriptografado é: ");
		
		for ( i = 0; i < (int) strlen(palavra); i++ )
		{
	 		palavra[i] = (int) palavra[i] - 3;
	 		if ( palavra[i] < 65 )
	 		{
	 			palavra[i] = 90-2;
	 			printf("%c", palavra[i]);
			}
			else
			{
				printf("%c", palavra[i]);
			}
			
	 	}
	 	menu();
	 	fflush(stdin);
}

// Menu do programa

int menu()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao = 0;

	do 
	{

		printf("\n\n\n\n\n\n *** CIFRA DE CÉSAR *** \n\n");
    	printf("\nEscolha abaixo uma opção:\n\n");
    	printf("1) Criptografar usando cifra de César\n");
    	printf("2) Descriptografar usando cifra de César\n");
    	printf("3) Sair do programa\n\n");
    	printf("\nOpção: ");
    	scanf("%i", &opcao);
    	fflush(stdin);
    	
    	system("CLS");

    	switch(opcao)
    	{
    		case 1:

    			cripto();
    			break;

    		case 2:
    		
    			descripto();
    			break;

    		case 3:

    			printf("\n\nSaindo do programa...\n\n");
    			break;

    		default:

    			printf("\nOpção Inválida\n");
    			menu();
    			break;
    	}

	}while(opcao > 4);
}

// Função principal, que no caso só chama a função Menu

int main()
{
	menu();	
}
