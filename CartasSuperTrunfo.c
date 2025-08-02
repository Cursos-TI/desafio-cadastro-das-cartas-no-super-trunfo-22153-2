#include <stdio.h>

int main(){
  
   char estado[50] = "Brasilia";
   char codigo[5] = "A01";
   char cidade[50] = "DF";
   int população = 28170000;
   float tamanho = 5.800;
   float pib = 265847000000;
   int turismo = 15;
   char cidade2 [50] = "taguatinga";
   char codigo2 [5] = "A02";
   int população2 = 200.000;
   float tamanho2 = 180.000;
   float pib2 = 200.000;
   int turismo2 = 1;
   char cidade3 [50] = "ceilandia";
   char codigo3 [5] = "A03";
   int população3 = 390.000;
   float tamanho3 = 230.000;
   float pib3 = 180.000;
   int turismo3 = 2;
   char cidade4 [50] = "guara";
   char codigo4 [5] = "A04";
   int população4 = 125.000;
   float tamanho4 = 8.100;
   float pib4 = 150.000;
   int turismo4 = 2;
   char estado2[50] = "Goias";
   char codigo5[5] = "B01";
   char cidade5[50] = "Goiania";
   int população5 = 100000;
   float tamanho5 = 728.000;
   float pib5 = 2.254000;
   int turismo5 = 5;
   char cidade6 [50] = "Trindade";
   char codigo6 [5] = "B02";
   int população6 = 150000;
   float tamanho6 = 528.000;
   float pib6 = 300.000;
   int turismo6 = 1;
   char cidade7 [50] = "Caldas Novas";
   char codigo7 [5] = "B03";
   int população7 = 270.000;
   float tamanho7 = 178.000;
   float pib7 = 1000.000;
   int turismo7 = 3;
   char cidade8 [50] = "Valparaiso";
   char codigo8 [5] = "B04";
   int população8 = 265.000;
   float tamanho8 = 14.100;
   float pib8 = 400.000;
   int turismo8 = 2;
   char estado3[50] = "Minas";
   char codigo9[5] = "C01";
   char cidade9[50] = "BeloHorizonte";
   int população9 = 274000;
   float tamanho9 = 880.000;
   float pib9 = 1200.00000;
   int turismo9 = 2;
   char cidade10 [50] = "Unai";
   char codigo10 [5] = "C02";
   int população10 = 110000;
   float tamanho10 = 20.173;
   float pib10 = 250.000;
   int turismo10 = 1;
   char cidade11 [50] = "Uberlandia";
   char codigo11 [5] = "C03";
   int população11 = 270.000;
   float tamanho11 =  172.8539;
   float pib11 = 1000.000;
   int turismo11= 3;
   char cidade12[50] = "Brumadinho";
   char codigo12 [5] = "C04";
   int população12 = 265.000;
   float tamanho12 = 23.0242;
   float pib12 = 400.000;
   int turismo12 = 2;
   char estado3[50] = "SãoPaulo";
   char codigo13 [5] = "D01";
   char cidade13 [50] = "SãoPaulo";
   int população13 = 11000000;
   float tamanho13 = 12000000;
   float pib13 = 1200.00000;
   int turismo13 = 5;
   char cidade14 [50] = "Guarulhos";
   char codigo14 [5] = "D02";
   int população14 = 2000000;
   float tamanho14 = 12546000;
   float pib14 = 1500000;
   int turismo14 = 3;
   char cidade15 [50] = "Campinas";
   char codigo15[5] = "D03";
   int população15 = 1139000;
   float tamanho15 = 1382.8539;
   float pib15 = 1800.000;
   int turismo15 = 3;
   char cidade12[50] = "Osasco";
   char codigo12 [5] = "D04";
   int população12 = 728.000;
   float tamanho12 = 528.000;
   float pib12 = 440.000;
   int turismo12 = 1;
   
   printf("Digite seu estado: ");
   scanf("%s", estado);
   printf("O estado é: %s\n", estado);

   printf("Digite seu codigo:  ");
   scanf("%3s", codigo);
   printf("O codigo é: %s\n",codigo);

   printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite a população: ");
    scanf("%d", &população);
    printf("A população é: %d\n", população);

    printf("Digite o km²: ");
    scanf("%f", &tamanho);
    printf("O km² é: %2f\n", tamanho);

    printf("Digite o pib:  ");
    scanf("%f", &pib) ;
    printf("O PIB é: %f\n", pib);

    printf("Digite o turismo: ");
    scanf("%d", &turismo);
    printf("O turismo é: %d\n", turismo);

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);
    printf("A cidade é: %s\n", cidade2);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo2);
    printf("O codigo é: %s\n", codigo2);

    printf("Digite a população: ");
    scanf("%d", &população2);
    printf("A população é: %d\n", população2);

    printf("Digite o km²: ");
    scanf("%f", &tamanho2);
    printf("O km² é: %f\n", tamanho2);

    printf("Digite o pib:  ");
    scanf("%f", &pib2) ;
    printf("O PIB é: %f\n", pib2);

    printf("Digite o turismo: ");
    scanf("%d", &turismo2);
    printf("O turismo é: %d\n", turismo2);
    
    printf("Digite a ciadade: ");
    scanf("%s", &cidade3);
    printf("A cidade é: %s\n", cidade3);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo3);
    printf("O codigo é: %s\n", codigo3);

    printf("Digite a população: ");
    scanf("%d", &população3);
    printf("A população é: %d\n", população3);

    printf("Digite o km²: ");
    scanf("%f", &tamanho3);
    printf("O km² é: %2f\n", tamanho3);

    printf("Digite o pib:  ");
    scanf("%f", &pib3) ;
    printf("O PIB é: %f\n", pib3);

    printf("Digite o turismo: ");
    scanf("%d", &turismo3);
    printf("O turismo é: %d\n", turismo3);

    printf("Digite a ciadade: ");
    scanf("%s", &cidade4);
    printf("A cidade é: %s\n", cidade4);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo4);
    printf("O codigo é: %s\n", codigo4);

    printf("Digite a população: ");
    scanf("%d", &população4);
    printf("A população é: %d\n", população4);

    printf("Digite o km²: ");
    scanf("%f", &tamanho4);
    printf("O km² é: %2f\n", tamanho4);

    printf("Digite o pib:  ");
    scanf("%f", &pib4) ;
    printf("O PIB é: %f\n", pib4);

    printf("Digite o turismo: ");
    scanf("%d", &turismo4);
    printf("O turismo é: %d\n", turismo4);

    printf("Digite seu estado: ");
   scanf("%s", estado2);
   printf("O estado é: %s\n", estado2);

   printf("Digite seu codigo:  ");
   scanf("%3s", codigo5);
   printf("O codigo é: %s\n",codigo5);

   printf("Digite a cidade: ");
    scanf("%s", cidade5);
    printf("A cidade é: %s\n", cidade5);

    printf("Digite a população: ");
    scanf("%d", &população5);
    printf("A população é: %d\n", população5);

    printf("Digite o km²: ");
    scanf("%f", &tamanho5);
    printf("O km² é: %2f\n", tamanho5);

    printf("Digite o pib:  ");
    scanf("%f", &pib5) ;
    printf("O PIB é: %f\n", pib5);

    printf("Digite o turismo: ");
    scanf("%d", &turismo5);
    printf("O turismo é: %d\n", turismo5);
    
    printf("Digite a cidade: ");
    scanf("%s", &cidade6);
    printf("A cidade é: %s\n", cidade6);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo6);
    printf("O codigo é: %s\n", codigo6);

    printf("Digite a população: ");
    scanf("%d", &população6);
    printf("A população é: %d\n", população6);

    printf("Digite o km²: ");
    scanf("%f", &tamanho6);
    printf("O km² é: %f\n", tamanho6);

    printf("Digite o pib:  ");
    scanf("%f", &pib6) ;
    printf("O PIB é: %f\n", pib6);

    printf("Digite o turismo: ");
    scanf("%d", &turismo6);
    printf("O turismo é: %d\n", turismo6);

    printf("Digite a cidade: ");
    scanf("%s", &cidade7);
    printf("A cidade2 é: %s\n", cidade7);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo7);
    printf("O codigo é: %s\n", codigo7);

    printf("Digite a população: ");
    scanf("%d", &população7);
    printf("A população é: %d\n", população7);

    printf("Digite o km²: ");
    scanf("%f", &tamanho7);
    printf("O km² é: %f\n", tamanho7);

    printf("Digite o pib:  ");
    scanf("%f", &pib7) ;
    printf("O PIB é: %f\n", pib7);

    printf("Digite o turismo: ");
    scanf("%d", &turismo7);
    printf("O turismo é: %d\n", turismo7);

    printf("Digite a cidade: ");
    scanf("%s", &cidade8);
    printf("A cidade2 é: %s\n", cidade8);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo8);
    printf("O codigo é: %s\n", codigo8);

    printf("Digite a população: ");
    scanf("%d", &população8);
    printf("A população é: %d\n", população8);

    printf("Digite o km²: ");
    scanf("%f", &tamanho8);
    printf("O km² é: %f\n", tamanho8);

    printf("Digite o pib:  ");
    scanf("%f", &pib8) ;
    printf("O PIB é: %f\n", pib8);

    printf("Digite o turismo: ");
    scanf("%d", &turismo8);
    printf("O turismo é: %d\n", turismo8);

    printf("Digite seu estado: ");
   scanf("%s", estado3);
   printf("O estado é: %s\n", estado3);

   printf("Digite seu codigo:  ");
   scanf("%3s", codigo9);
   printf("O codigo é: %s\n",codigo9);

   printf("Digite a cidade: ");
    scanf("%s", cidade9);
    printf("A cidade é: %s\n", cidade9);

    printf("Digite a população: ");
    scanf("%d", &população9);
    printf("A população é: %d\n", população9);

    printf("Digite o km²: ");
    scanf("%f", &tamanho9);
    printf("O km² é: %2f\n", tamanho9);

    printf("Digite o pib:  ");
    scanf("%f", &pib9) ;
    printf("O PIB é: %f\n", pib9);

    printf("Digite o turismo: ");
    scanf("%d", &turismo9);
    printf("O turismo é: %d\n", turismo9);
    
    printf("Digite a cidade: ");
    scanf("%s", &cidade10);
    printf("A cidade é: %s\n", cidade10);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo10);
    printf("O codigo é: %s\n", codigo10);

    printf("Digite a população: ");
    scanf("%d", &população10);
    printf("A população é: %d\n", população10);

    printf("Digite o km²: ");
    scanf("%f", &tamanho10);
    printf("O km² é: %f\n", tamanho10);

    printf("Digite o pib:  ");
    scanf("%f", &pib10);
    printf("O PIB é: %f\n", pib10);

    printf("Digite o turismo: ");
    scanf("%d", &turismo10);
    printf("O turismo é: %d\n", turismo10);

    printf("Digite a cidade: ");
    scanf("%s", &cidade11);
    printf("A cidade é: %s\n", cidade11);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo11);
    printf("O codigo é: %s\n", codigo11);

    printf("Digite a população: ");
    scanf("%d", &população11);
    printf("A população é: %d\n", população11);

    printf("Digite o km²: ");
    scanf("%f", &tamanho11);
    printf("O km² é: %f\n", tamanho11);

    printf("Digite o pib:  ");
    scanf("%f", &pib11);
    printf("O PIB é: %f\n", pib11);

    printf("Digite o turismo: ");
    scanf("%d", &turismo11);
    printf("O turismo é: %d\n", turismo11);

    printf("Digite a cidade: ");
    scanf("%s", &cidade12);
    printf("A cidade2 é: %s\n", cidade12);

    printf("Digite o codigo: ");
    scanf("%3s", &codigo12);
    printf("O codigo é: %s\n", codigo12);

    printf("Digite a população: ");
    scanf("%d", &população12);
    printf("A população é: %d\n", população12);

    printf("Digite o km²: ");
    scanf("%f", &tamanho12);
    printf("O km² é: %f\n", tamanho12);

    printf("Digite o pib:  ");
    scanf("%f", &pib12);
    printf("O PIB é: %f\n", pib12);

    printf("Digite o turismo: ");
    scanf("%d", &turismo12);
    printf("O turismo é: %d\n", turismo12);

    



    

   
   
    return 0;
}
   
















