#include <stdio.h>

int main(){
    char estado[50] = "Brasilia";
    char codigo [5] = "A01";
    char cidade [50] = "DF";
    float população = 3.00000;
    float tamanho = 5.8000;
    float pib = 265847000000;
    int turismo = 15;
    char estado2[50] = "Goias";
    char codigo2 [5] = "B02";
    char cidade2 [50] = "Goiania";
    float população2 = 4.0000;
    float tamanho2 = 6000;
    float pib2 = 70000;
    int turismo2 = 8;
    
    printf("Digite seu estado: ");
    scanf("%s", &estado);
    printf("O estado é: %s\n", estado);

    printf("Digite seu codigo:  ");
    scanf("%s", &codigo);
    printf("O codigo é: %s\n",codigo);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite a população: ");
    scanf("%f", &população);
    printf("A população é: %2f\n", população);

    printf("Digite o km²: ");
    scanf("%f", &tamanho);
    printf("O km² é: %2f\n", tamanho);

    printf("Digite o pib:  ");
    scanf("%f", &pib) ;
    printf("O PIB é: %f\n", pib);

    printf("Digite o turismo: ");
    scanf("%d", &turismo);
    printf("O turismo é: %d\n", turismo);

    
    printf("Digite seu estado: ");
    scanf("%s", &estado2);
    printf("O estado é: %s\n", estado2);

    printf("Digite seu codigo:  ");
    scanf("%3s", &codigo2);
    printf("O codigo é: %s\n",codigo2);

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);
    printf("A cidade é: %s\n", cidade2);

    printf("Digite a população: ");
    scanf("%f", &população2);
    printf("A população é: %2f\n", população2);

    printf("Digite o km²: ");
    scanf("%f", &tamanho2);
    printf("O km² é: %2f\n", tamanho2);

    printf("Digite o pib:  ");
    scanf("%f", &pib2) ;
    printf("O PIB é: %f\n", pib2);

    printf("Digite o turismo: ");
    scanf("%d", &turismo2);
    printf("O turismo é: %d\n", turismo2);

    

return 0;

    
}
   
















