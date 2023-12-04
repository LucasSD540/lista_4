#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 10

char senha[50], nomeCliente[SIZE][50], nomePet[SIZE][50], tel[SIZE][50], nomePetAgendamento[SIZE][50], clienteAgendado[SIZE][50], clienteConsulta[SIZE][50], drConsulta[SIZE][50], finalConsulta[SIZE][50], dataConsulta[50];
int menu, clientes, agendamento, agendamentos, consulta, consultas, data, cliente, dr;

void cadastrarCliente();

void agendar();

void consultar();

void imprimir();

void sair();

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

	if(data == 1) {
		strcpy(dataConsulta, "06/12");
	} else if(data == 2) {
		strcpy(dataConsulta, "07/12");
	} else {
		system("cls");
		printf("Data inválida\n");
		consultar();
		system("cls");
	}

	printf("\nLista de clientes: \n");

       for(i = 0; i < clientes; i++) {
    		printf("\n%i - %s", i + 1, nomeCliente[i]);
	   }
	   
	   printf("Escolha um dos clientes. \n");
        fflush(stdin);
        scanf("%i", &cliente);
        
        switch(cliente) {
        	case 1:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[0]);
        	break;
        	case 2:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[1]);
        	break;
        	case 3:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[2]);
        	break;
        	case 4:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[3]);
        	break;
        	case 5:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[4]);
        	break;
        	case 6:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[5]);
        	break;
        	case 7:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[6]);
        	break;
        	case 8:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[7]);
        	break;
        	case 9:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[8]);
        	break;
        	case 10:
        		sprintf(clienteConsulta[linha], "%s", nomeCliente[9]);
        	break;
        	default:
        		printf("Opção incorreta");
        	break;
		}
        
        printf("\nLista de Drs.: \n");
        
    	printf("\n1 - Dr. Lucas \n");
    	printf("\n2 - Dr. Fabiano \n");
	   
	   printf("\nEscolha um dos Drs.\n");
	   
        fflush(stdin);
        scanf("%i", &dr);
        
        switch(dr) {
        	case 1:
        		sprintf(drConsulta[linha], "Dr. Lucas");
        	break;
        	case 2:
        		sprintf(drConsulta[linha], "Dr. Fabiano");
        	break;
        	default:
        		printf("Opção incorreta");
        	break;
		}
		
		sprintf(finalConsulta[linha], "%s / %s / %s", drConsulta[linha], clienteConsulta[linha], dataConsulta);

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
	
	printf("\n\n----------clientes----------\n\n");
	
	for(i = 0; i < clientes; i++) {
		printf("\n%i - Nome do cliente: %s\n", i + 1, nomeCliente[i]);
	}
	
	printf("\n\n----------agendamentos----------\n\n");
	
	for(i = 0; i < agendamentos; i++) {
		printf("\n%i %s\n", i + 1, clienteAgendado[i]);
	}
	
	printf("\n\n----------consultas----------\n\n");
	
	for(i = 0; i < consultas; i++) {
		printf("\n%i - %s\n", i + 1, finalConsulta[i]);
	}
	
	system("pause");
}

void sair() {
	system("cls");
	
	printf("Volte sempre ao Super_Petshop_Lucas_ADS");
	
	exit(0);
}

void menuShow() {
	system("cls");
	
	printf("Super_Petshop_Lucas_ADS\n\n");
		
		printf("1 - Cadastrar Cliente\n");
		printf("2 - Agendar BANHO ou TOSA\n");
		printf("3 - Consulta\n");
		printf("4 - Imprimir relatório geral\n");
		printf("5 - Sair\n");
		fflush(stdin);
		scanf("%i", &menu);
		
		if(menu != 1 && menu != 2 && menu != 3 && menu != 4 && menu != 5) {
			system("cls");
			printf("Opção incorreta\n");
			system("pause");
			menuShow();
		}
		
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
			case 5 :
				system("cls");
				sair();
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
