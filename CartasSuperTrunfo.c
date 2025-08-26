// Desafio Super Trunfo - Países
// Inicializando a implementacao do Super Trunfo, com duas cartas de duas cidades diferentes.
#include <stdio.h>
int main (){

   // Declaracao de Dados da primeira carta :
    int Populacao1;
    int NumeroPontosTuristicos1;
    float Area1;
    float PIB1;
    char Estado1;
    char CodigoDaCarta1[5];
    char NomeDaCidade1[20];

    // Declaracao de Dados da segunda carta :

    int Populacao2;
    int NumeroPontosTuristicos2;
    float Area2;
    float PIB2;
    char Estado2;
    char CodigoDaCarta2[5];
    char NomeDaCidade2[20];

// Inicio da entrada de valores das variaveis da Carta 1

printf("Inicializacao do Super Trunfo \n");
printf("Insira os dados da Carta 1\n");
printf("Estado 1 A-H: \n");
scanf ("%c",&Estado1);
printf("Agora,digite o Codigo da Carta : \n");
scanf("%s",&CodigoDaCarta1);
printf ("Insira o nome da cidade : \n ");
scanf ("%s",&NomeDaCidade1);
printf("Qual e a Populacao dessa cidade ? \n ");
scanf("%d",&Populacao1);
printf ("Informe a area em km2 dessa cidade \n");
scanf("%f",&Area1);
printf("Qual o PIB dessa cidade ? \n");
scanf("%f",&PIB1);
printf("Digite o numero de pontos turisticos dessa cidade : \n");
scanf("%d",&NumeroPontosTuristicos1);

//Inicio da entrada de valores das variaveis da Carta 2

printf("Insira os dados da Carta 2 \n");
printf("Estado 2 A-H : \n");
scanf(" %c", &Estado2);
printf("Agora,digite o Codigo da Carta : \n" );
scanf("%s",&CodigoDaCarta2);
printf("Insira o nome da cidade : \n");
scanf("%s",&NomeDaCidade2);
printf("Qual e a populacao dessa cidade ? \n");
scanf("%d",&Populacao2);
printf("Qual e a area em km2 dessa cidade? \n");
scanf("%f",&Area2);
printf("Qual e o PIB dessa cidade ? \n");
scanf ("%f",&PIB2);
printf ("Digite o numero de pontos turisticos dessa cidade : \n");
scanf ("%d",&NumeroPontosTuristicos2);

// Depois de receber os dados das duas cartas , agora veremos os dados informados de ambas :

printf("Dados da Carta 1 \n");

printf("Caractere do Estado A-H : %c\n",Estado1);
printf ("Codigo da Carta : %s\n ",CodigoDaCarta1);
printf("Nome da Cidade : %s\n",NomeDaCidade1);
printf("Populacao da Cidade : %d\n ",Populacao1);
printf("Area da Cidade : %.2f km2\n",Area1);
printf("PIB da Cidade : %f\n ",PIB1);
printf("Numero de Pontos Turisticos da Cidade : %d\n",NumeroPontosTuristicos1);\

printf("Dados da Carta 2 \n");

printf("Caractere do Estado A-H : %c\n",Estado2);
printf("Codigo da Carta : %s\n ",CodigoDaCarta2);
printf("Nome da Cidade :%s\n",NomeDaCidade2);
printf("Populacao da Cidade : %d\n",Populacao2);
printf("Area da Cidade : %.2f km2\n",Area2);
printf("PIB da Cidade : %.2f\n",PIB2);
printf("Numero de Pontos Turisticos da Cidade : %d\n",NumeroPontosTuristicos2);





}


