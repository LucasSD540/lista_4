#include<stdio.h>
#include<locale.h>
#include<string.h>
#define SIZE 10

char senha[50], nomeCliente[SIZE][50], nomePet[SIZE][50], tel[SIZE][50], nomePetAgendamento[SIZE][50], clienteAgendado[SIZE][50], clienteConsulta[SIZE][50], drConsulta[SIZE][50];
int menu, clientes, agendamento, agendamentos, consulta, consultas, data, cliente, dr;

void cadastrarCliente();

void agendar();

void consultar();

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

void agendar() {
	static int linha;
	
	printf("Super_Petshop_Lucas_ADS\n\n");
	
	do {
        printf("Nome do pet: ");
        fflush(stdin);
        fgets(nomePetAgendamento[linha], 50, stdin);

        printf("Serviços disponíveis: \n");
        printf("1 - Banho\n");
        printf("2 - Tosa\n");
        printf("3 - Banho e tosa\n");
        fflush(stdin);
        scanf("%i", &agendamento);
        
        switch(agendamento) {
        	case 1:
        		sprintf(clienteAgendado[linha], "%s - Banho", nomePetAgendamento[linha]);
        	break;
        	case 2:
        		sprintf(clienteAgendado[linha], "%s - Tosa", nomePetAgendamento[linha]);
        	break;
        	case 3:
        		sprintf(clienteAgendado[linha], "%s - Banho e tosa", nomePetAgendamento[linha]);
        	break;
        	default:
        		printf("Opção incorreta");
        	break;
		}

		linha++;
		
		agendamentos++;
		
        system("cls");
        menuShow();
    }
    while(menu == 2);
}

void consultar() {
	static int linha;
	int i;
	
	printf("Super_Petshop_Lucas_ADS\n\n");
	
	do {
        printf("Dias disponíveis: \n");
        printf("1 - 06/12\n");
        printf("2 - 07/12\n");
        fflush(stdin);
        scanf("%i", &data);

	printf("\nSelecione qual cliente você é: \n");

       for(i = 0; i < clientes; i++) {
    		printf("\n%i - %s", nomeCliente[i], i + 1);
	   }
        fflush(stdin);
        scanf("%i", &cliente);
        
        switch(cliente) {
        	case 1:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[i]);
        	break;
        	case 2:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[i]);
        	break;
        	case 3:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[i]);
        	break;
        	default:
        		printf("Opção incorreta");
        	break;
		}
        
    	printf("\n1 - Dr. Lucas");
    	printf("\n2 - Dr. Fabiano");
	   
        fflush(stdin);
        scanf("%i", &dr);
        
        switch(dr) {
        	case 1:
        		sprintf(drConsulta[linha], "%s - Banho", clienteConsulta[linha]);
        	break;
        	case 2:
        		sprintf(drConsulta[linha], "%s - Tosa", clienteConsulta[linha]);
        	break;
        	case 3:
        		sprintf(drConsulta[linha], "%s - Banho e tosa", clienteConsulta[linha]);
        	break;
        	default:
        		printf("Opção incorreta");
        	break;
		}

		linha++;
		
		consultas++;
		
        system("cls");
        menuShow();
    }
    while(menu == 3);
}

void imprimir() {
	int i;
	
	printf("Super_Petshop_Lucas_ADS\n\n");
	
	for(i = 0; i < clientes; i++) {
		printf("\nNome do cliente: %s", nomeCliente[i]);
	}
	system("pause");
	
	for(i = 0; i < agendamentos; i++) {
		printf("\n%s", clienteAgendado[i]);
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
				agendar();
			break;
			;
			case 3 :
				system("cls");
				consultar();
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
