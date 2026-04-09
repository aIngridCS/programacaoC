#include <stdio.h>

int main(){

    int idade;
    float altura;
    float peso;
    char opcao;
    char nome[20];


    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Nome: %s\n", nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Idade: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Altura: %.2f\n", altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Peso: %.2f\n", peso);

    printf("Digite a opcao: ");
    scanf(" %c", &opcao);
    printf("Opcao: %c\n", opcao);

    return 0;
    
}