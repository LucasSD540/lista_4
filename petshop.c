#include<stdio.h>
#include<locale.h>
#include<string.h>
#define SIZE 10

char senha[50], nomeCliente[SIZE][50], nomePet[SIZE][50], tel[SIZE][50];
int menu, clientes;

void cadastrarCliente();

void imprimir();

void menuShow();

void seu_primeiro_nome() {
	static int linha;
	
	printf("Super_Petshop_Lucas_ADS\n\n");
	
	do {
        printf("Nome do cliente: ");
        fflush(stdin);
        fgets(nomeCliente[linha], 50, stdin);

        printf("Nome do pet: ");
        fflush(stdin);
        fgets(nomePet[linha], 50, stdin);

        printf("Telefone: ");
        fflush(stdin);
        fgets(tel[linha], 50, stdin);

		linha++;
		
		clientes++;
		
        system("cls");
        menuShow();
    }
    while(menu == 1);
}

void imprimir() {
	int i;
	
	printf("Super_Petshop_Lucas_ADS\n\n");
	
	for(i = 0; i < clientes; i++) {
		printf("\nNome do cliente: %s", nomeCliente[i]);
		printf("\nNome do pet cliente: %s", nomePet[i]);
		printf("\nTelefone do cliente: %s", tel[i]);
		printf("\n");
	}
	system("pause");
}

void menuShow() {
	system("cls");
	
	printf("Super_Petshop_Lucas_ADS\n\n");
		
		printf("1 - Cadastrar Cliente\n");
		printf("2 - Agendar BANHO ou TOSA\n");
		printf("3 - CONSULTA\n");
		printf("4 - IMPRIMIR RELATÓRIO GERAL\n");
		scanf("%i", &menu);
		
		switch(menu) {
			case 1 :
					system("cls");
					seu_primeiro_nome();
				break;
			;
			case 2 :
				system("cls");
				break;
			;
			case 3 :
				system("cls");
				break;
			;
			case 4 :
				system("cls");
				imprimir();
				break;
			;
		}
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
	
	system("cls");
	
	while (strcmp(senha, "patinha") == 0) {
		menuShow();
	}
	return 0;
}
