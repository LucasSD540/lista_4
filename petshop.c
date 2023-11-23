#include<stdio.h>
#include<locale.h>
#include<string.h>

char senha[50];
int menu;

void cadastrarCliente() {
	printf("Nome");
}

main (void) {
	setlocale(LC_ALL, "");
	
	printf("Digite a senha: ");
	fflush(stdin);
	scanf("%s", &senha);
	
	while (strcmp(senha, "patinha") != 0) {
		printf("Senha incorreta, digite sua senha novamente: \n");
		fflush(stdin);
		scanf("%s", &senha);
	}
	
	while (strcmp(senha, "patinha") == 0) {
		printf("Super_Petshop_Lucas_ADS");
		
		printf("1 - Cadastrar Cliente");
		printf("2 - Agendar BANHO ou TOSA");
		printf("3 - CONSULTA");
		printf("4 - IMPRIMIR RELATÓRIO GERAL");
		scanf("%i", &menu);
		
		switch(menu) {
			case 1 :
				system("cls");
				cadastrarCliente();
				break;
			;
			case 2 :
				system("cls");
				agendarBanho();
				break;
			;
			case 3 :
				system("cls");
				consulta();
				break;
			;
			case 4 :
				system("cls");
				impressao();
				break;
			;
		}
		return 0;	
	}
}
