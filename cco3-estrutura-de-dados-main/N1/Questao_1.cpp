/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 Per�odo
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Quest�o 1: 
Anualmente � cobrado de propriet�rios de ve�culos automotores o IPVA (Imposto sobre a propriedade de ve�culos automotores) em todos os estados do Brasil e o DF, 
podendo o mesmo ser pago em cota �nica, ou geralmente em at� 3 cotas com juros. 
Sabendo-se que o m�s em que o licenciamento deve ser renovado em um estado X � determinado pelo �ltimo n�mero da placa do mesmo, fa�a um programa que, a partir da leitura da placa do carro, 
informe o m�s em que o licenciamento deve ser renovado. Considere uma situa��o hipot�tica em que o dono do ve�culo fa�a o pagamento em cota �nica. 
(Use : Fev � final 0, mar � final 1, ...).
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

//fun��o para limpar a tela
void limpatela(){
	system("CLS");
}

//fun��o principal
int main(){
	//acentua��o
	setlocale(LC_ALL, "");
	
	//vari�veis
	int placa;
	int digitoFinal;
	
	printf("Programa que informa o m�s no qual deve ser pago o IPVA, tecle ENTER para continuar.\n\n");
	getch();
	limpatela();				//Chama a fun��o limpatela
	
	printf("Digite aqui os n�meros da sua placa: ");
	scanf("%d",&placa);			//Recebe o valor do usu�rio 
	fflush(stdin);				//limpa buffer do teclado
	digitoFinal = placa % 10;   //Recebe o valor do �ltimo d�gito da placa
	limpatela();				//Chama a fun��o limpatela
	
	switch(digitoFinal){		//Executa de acordo com o valor de  digitoFinal
		case 0:
			printf("Final de placa 0, o IPVA deve ser pago em Fevereiro.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 1:
			printf("Final de placa 1, o IPVA deve ser pago em Mar�o.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 2:
			printf("Final de placa 2, o IPVA deve ser pago em Abril.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 3:
			printf("Final de placa 3, o IPVA deve ser pago em Maio.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 4:
			printf("Final de placa 4, o IPVA deve ser pago em Junho.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 5:
			printf("Final de placa 5, o IPVA deve ser pago em Julho.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 6:
			printf("Final de placa 6, o IPVA deve ser pago em Julho.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 7:
			printf("Final de placa 7, o IPVA deve ser pago em Agosto.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 8:
			printf("Final de placa 8, o IPVA deve ser pago em Setembro.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 9:
			printf("Final de placa 9, o IPVA deve ser pago em Outubro.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
	}
	limpatela();				//Chama a fun��o limpatela
	printf("\n\nOpera��o finalizada pressione qualquer tecla para continuar.\n\n");
	getch();
}
