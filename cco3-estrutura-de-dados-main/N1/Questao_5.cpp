/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 Per�odo
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Quest�o 5: 
Estudantes do 3� per�odo de CCO da UNIFG, uma grande empresa est� desenvolvendo um novo sistema operacional para m�quinas de venda de bolinhas de borracha de R$ 1,00,
mas precisa realizar testes no Gerenciador de Mem�ria desse novo sistema. 
Voc� foi contratado para fazer um programa para verificar se o gerenciador de mem�ria est� funcionando corretamente.
Seu programa dever� ler 3 n�meros inteiros, 3 n�meros decimais, 3 letras, armazen�-las em vari�veis,
e depois, atrav�s de ponteiros, trocar os seus valores, substituindo todos os n�meros inteiros pelo n�mero 2021, os decimais por 9.99, e as letras por �X�. 
Depois da substitui��o, o programa dever� exibir o valor das vari�veis j� devidamente atualizados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
//char 	caracter, float real de precis�o simples ,int inteiro
int num1, num2, num3;
int*p_num;
float dec1, dec2, dec3;
float*p_dec;
char letra1, letra2, letra3;
char*p_letra;

// dados 
printf("Digite um numero inteiro: ");
scanf("%d", &num1);
fflush(stdin);
printf("Agora Digite outro numero inteiro: ");
scanf("%d", &num2);
fflush(stdin);
printf("s� mais um numero inteiro: ");
scanf("%d", &num3);
fflush(stdin);

printf("Digite um numero decimal: ");
scanf("%f", &dec1);
fflush(stdin);
printf("Digite denovo outro numero decimal diferente: ");
scanf("%f", &dec2);
fflush(stdin);
printf("quase l�.  Digite outro numero decimal: ");
scanf("%f", &dec3);
fflush(stdin);

printf("quase acabando, agora digite uma letra: ");
scanf(" %c", &letra1);
printf("s� mais um, digite outra letra: ");
scanf(" %c", &letra2);
printf("acabou esse � o ultimo, agora digite outra letra: ");
scanf(" %c", &letra3);

//printf dos dados anterior
printf("Os numeros informados: \n");
printf("Seus Inteiros: %d, %d e %d \n", num1, num2, num3);
printf("Seus Decimais: %.2f, %.2f e %.2f \n", dec1, dec2, dec3);
printf("Suas Letras: %c, %c e %c \n", letra1, letra2, letra3);
printf("\n");

// variaveis de ponteiros com trocas dos valores anterior
p_num = &num1;
*p_num = 2021;
p_num = &num2;
*p_num = 2021;
p_num = &num3;
*p_num = 2021;

p_dec = &dec1;
*p_dec = 9.99;
p_dec = &dec2;
*p_dec = 9.99;
p_dec = &dec3;
*p_dec = 9.99;

p_letra = &letra1;
*p_letra = 'X';
p_letra = &letra2;
*p_letra = 'X';
p_letra = &letra3;
*p_letra = 'X';

//printf das variaveis com os novos valores
printf("Valores modificados: \n");
printf("Primeiro numero inteiro: %d \n", num1);
printf("Segundo numero inteiro: %d \n", num2);
printf("Terceiro numero inteiro: %d \n", num3);

printf("Primeiro numero decimal: %.2f \n", dec1);
printf("Segundo numero decimal: %.2f \n", dec2);
printf("Terceiro numero decimal: %.2f \n", dec3);

printf("Primeira letra: %c \n", letra1);
printf("Segunda letra: %c \n", letra2);
printf("Terceira letra: %c \n", letra3);
}

