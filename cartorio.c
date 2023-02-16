#include <stdio.h> // biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o

int main (){
	
	int option = 0; // Definindo vari�veis
	
	setlocale(LC_ALL, "Portuguese"); // Definindo Idioma do Programa
	
	
	printf("### Cart�rio da EBAC ###\n\n"); // In�cio do Menu
	printf("Escolha a op��o desejada do menu: \n\n");
	printf("\t1 - Registrar Nomes\n");
	printf("\t2 -Consultar Nomes\n");
	printf("\t3 - Deletar Nomes\n\n"); 
	printf("Op��o: "); // Fim do Menu

	scanf("%d", & option); // Armazenando a escolha do usu�rio
	
	system("cls");
	
	// In�cio da Valida��o
	
	if (option == 1){ 
		printf("Voc� escolheu o Registro de Nomes!");
	} else if (option == 2){
		printf("Voc� escolheu Consultar Nomes!");
	} else if (option == 3){
		printf("Voc� escolheu Deletar Nomes!");
	} else {
		printf("Voc� escolheu uma op��o que n�o existe no Menu!");
	}
	
	// Fim da Valida��o
}
