#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 255
int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	char palavra[TAM];
	char sair[1];
	int i,opcao;
    
    
    
    printf("\n\n *** CIFRA DE CÉSAR *** \n\n");
    printf("\nEscolha abaixo uma opção:\n\n");
    printf("1) Criptografar usando cifra de César\n");
    printf("2) Descriptografar usando cifra de César\n");
    printf("3) Sair do programa\n\n");
    printf("\nOpção: ");
    scanf("%i", &opcao);
    fflush(stdin);
	  	
	while (opcao != 1 && opcao != 2 && opcao != 3)
	{
	  	printf("\n\nOpção inexistente, escolha novamente!\n\n");
    	printf("\nEscolha abaixo uma opção:\n\n");
    	printf("1) Criptografar usando cifra de César\n");
    	printf("2) Descriptografar usando cifra de César\n");
    	printf("3) Sair do programa\n\n");
    	printf("\nOpção: ");
    	scanf("%i", &opcao);
    	fflush(stdin);
	}
		
	if (opcao == 1)
	{
	
    	printf("\nEntre com o texto a ser criptografado: ");
    	gets(palavra);
		strupr(palavra);    
    	
		printf("\nO texto criptografado é: ");
		
		for ( i = 0; i < (int) strlen(palavra); i++ )
		{
	 		palavra[i] = (int) palavra[i] + 3;
	 		if ( palavra[i] > 90 )
	 		{
	 			palavra[i] = 65 + 2;
				if ( palavra[i] != 35 )
	 			{
	 				printf("%c", palavra[i]);
				}
			}
			else
			{
				printf("%c", palavra[i]);
			}
		}	
		printf("\n\n");
		fflush(stdin);
		printf("\nDeseja continuar (s/n): ");
		scanf("%c", &sair[1]);
		fflush(stdin);
		
				
 	}
 		 
	if (opcao == 2)
	{
		printf("\nEntre com o texto criptografado: ");
    	gets(palavra);
		strupr(palavra);    
    	
		printf("\nO texto descriptografado é: ");
		
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
		printf("\n\n");
		fflush(stdin);
		printf("\nDeseja continuar (s/n): ");
		scanf("%c", &sair[1]);
		fflush(stdin);
	} 
	
	if (opcao == 3)
	{
		return 0;
	}
	
	while (sair[1] == 's' || sair[1] == 'S')
	{
		printf("\n\n *** CIFRA DE CÉSAR *** \n\n");
    	printf("\nEscolha abaixo uma opção:\n\n");
    	printf("1) Criptografar usando cifra de César\n");
    	printf("2) Descriptografar usando cifra de César\n");
    	printf("3) Sair do programa\n");
    	printf("\nOpção: ");
    	scanf("%i", &opcao);
    	fflush(stdin);
	  	
		while (opcao != 1 && opcao != 2 && opcao != 3)
		{
	  		printf("\n\nOpção inexistente, escolha novamente!\n\n");
    		printf("\nEscolha abaixo uma opção:\n\n");
    		printf("1) Criptografar usando cifra de César\n");
    		printf("2) Descriptografar usando cifra de César\n");
    		printf("3) Sair do programa\n");
    		printf("\nOpção: ");
    		scanf("%i", &opcao);
    		fflush(stdin);
		}
		
		if (opcao == 1)
		{
	
    		printf("\nEntre com o texto a ser criptografado: ");
    		gets(palavra);
			strupr(palavra);    
    	
			printf("\nO texto criptografado é: ");
		
			for ( i = 0; i < (int) strlen(palavra); i++ )
			{
	 			palavra[i] = (int) palavra[i] + 3;
	 			if ( palavra[i] > 90 )
	 			{
	 				palavra[i] = 65 + 2;
					if ( palavra[i] != 35 )
	 				{
	 					printf("%c", palavra[i]);
					}
				}
				else
				{
					printf("%c", palavra[i]);
				}
			}	
			printf("\n\n");
			fflush(stdin);
			printf("\nDeseja continuar (s/n): ");
			scanf("%c", &sair[1]);
			fflush(stdin);
					
 		}
 		 
		if (opcao == 2)
		{
			printf("\nEntre com o texto criptografado: ");
    		gets(palavra);
			strupr(palavra);    
    	
			printf("\nO texto descriptografado é: ");
		
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
			printf("\n\n");
			fflush(stdin);
			printf("\nDeseja continuar (s/n): ");
			scanf("%c", &sair[1]);
			fflush(stdin);
		}
		
		if (opcao == 3)
		{
			return 0;
		}
		
	}
		
}
