#include <stdio.h> // biblioteca de comunicação com o usuário
#include <stdlib.h> // biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região

int main (){
	
	int option = 0; // Definindo variáveis
	
	setlocale(LC_ALL, "Portuguese"); // Definindo Idioma do Programa
	
	
	printf("### Cartório da EBAC ###\n\n"); // Início do Menu
	printf("Escolha a opção desejada do menu: \n\n");
	printf("\t1 - Registrar Nomes\n");
	printf("\t2 -Consultar Nomes\n");
	printf("\t3 - Deletar Nomes\n\n"); 
	printf("Opção: "); // Fim do Menu

	scanf("%d", & option); // Armazenando a escolha do usuário
	
	system("cls");
	
	// Início da Validação
	
	if (option == 1){ 
		printf("Você escolheu o Registro de Nomes!");
	} else if (option == 2){
		printf("Você escolheu Consultar Nomes!");
	} else if (option == 3){
		printf("Você escolheu Deletar Nomes!");
	} else {
		printf("Você escolheu uma opção que não existe no Menu!");
	}
	
	// Fim da Validação
}
