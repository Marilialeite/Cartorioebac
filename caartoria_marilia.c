#include <stdio.h> // biblio de comunica��o com o usu�rui
#include <stdlib.h> // biblio de aloca��o de espa�o em mem�ria
#include <locale.h> // biblio de testos por regi�o 
#include <string.h> // biblio respons�vel por cuidar das string

	int registro ()
{	
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:"); // coletando informa��o do usus�rio
	scanf("%s",cpf); // %s - refere-se a strings
	
	strcpy (arquivo,cpf); // respos�vel por copiar os valores dos string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo,"w"); // cria o arquivove o W significa escrever
	fprintf(file,cpf); // salva o valor da vari�vel
	fclose(file); // fecha o arquivo 
	
	file = fopen(arquivo, "a");
	fprintf (file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado");
	scanf("%s",nome);
	
	file = fopen (arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf (file,",");
	fclose(file);
	
	
	printf("digite o sobrenome a ser cadastrado");
	scanf("%s",sobrenome);
	
	file = fopen (arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf (file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado");
	scanf("%s",cargo);
	
	file = fopen (arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system ("pause");
	
	
	
	
}

	int consulta ()
	
	
{
		setlocale(LC_ALL, "portuguese"); // definindo a linguagem 
		
	char cpf[40];
	char conteudo [200];
	
		printf("digite o CPF a ser cadastrado");
		scanf("%s",cpf);
		
		FILE *file;
		file = fopen(cpf, "r");
		
		if(file == NULL)
		{
			printf("N�o foi poss�vel abrir o arquivo, n�o localizado. \n");
		}
		
		while(fgets(conteudo, 200, file) !=NULL)
		{
			printf("\n essas s�o as informa��es do usu�rio:");
			printf("%s", conteudo);
			printf("\n\n");
		}
		
		system ("pause");
}
		
	
 


	int deletar ()
{
	char cpf [40];
	
	printf("Digite o CPF a ser deletado:");
	scanf("%s",cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema. \n");
		system ("pause");
	}
	
	
}

	int main ()
	
{ 	int opcao=0; // definindo variaveis
	int laco=1;
	
	for (laco=1; laco=1;)
	{
	
	setlocale(LC_ALL, "portuguese"); // definindo a linguagem 
	printf ("### Cart�rio da EBAC ### \n\n"); // inicio do Menu 
	printf ("Escolha a op��o desejada no menu \n\n");
	printf ("\t1 - Rigistrar nomes \n\n");
	printf ("\t2 - Consultar nomes \n\n");
	printf ("\t3 - Deletar nomes \n\n"); 
	printf ("op��o:"); // fim do menu 
	
	scanf ("%d" , &opcao); // aarmazenando a escolha do usu�rio
	
	system ("cls"); //respons�vel por limpar a tela 
	
	switch(opcao)
	{
		case 1:
		registro(); // chamada de fun��o 
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break; 
		
		default: 
		printf ("esta op��o n�o esta dispon�vel, tente novamente!");
		system("pause");
		break; 	
			
	} // fim da sele�ao 
	
	
}
}

