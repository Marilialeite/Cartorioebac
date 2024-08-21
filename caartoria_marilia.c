#include <stdio.h> // biblio de comunicação com o usuárui
#include <stdlib.h> // biblio de alocação de espaço em memória
#include <locale.h> // biblio de testos por região 
#include <string.h> // biblio responsável por cuidar das string

	int registro ()
{	
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:"); // coletando informação do ususário
	scanf("%s",cpf); // %s - refere-se a strings
	
	strcpy (arquivo,cpf); // resposável por copiar os valores dos string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo,"w"); // cria o arquivove o W significa escrever
	fprintf(file,cpf); // salva o valor da variável
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
			printf("Não foi possível abrir o arquivo, não localizado. \n");
		}
		
		while(fgets(conteudo, 200, file) !=NULL)
		{
			printf("\n essas são as informações do usuário:");
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
		printf("O usuário não se encontra no sistema. \n");
		system ("pause");
	}
	
	
}

	int main ()
	
{ 	int opcao=0; // definindo variaveis
	int laco=1;
	
	for (laco=1; laco=1;)
	{
	
	setlocale(LC_ALL, "portuguese"); // definindo a linguagem 
	printf ("### Cartório da EBAC ### \n\n"); // inicio do Menu 
	printf ("Escolha a opção desejada no menu \n\n");
	printf ("\t1 - Rigistrar nomes \n\n");
	printf ("\t2 - Consultar nomes \n\n");
	printf ("\t3 - Deletar nomes \n\n"); 
	printf ("opção:"); // fim do menu 
	
	scanf ("%d" , &opcao); // aarmazenando a escolha do usuário
	
	system ("cls"); //responsável por limpar a tela 
	
	switch(opcao)
	{
		case 1:
		registro(); // chamada de função 
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break; 
		
		default: 
		printf ("esta opção não esta disponível, tente novamente!");
		system("pause");
		break; 	
			
	} // fim da seleçao 
	
	
}
}

