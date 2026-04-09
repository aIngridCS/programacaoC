#include <stdio.h>

int main(){
    int idade = 31;
    int quantidade = 1;
    float altura = 1.58;
    double peso = 60.7;
    char letra = 'A';
    char nome[20] = "Ingrid";

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);

    return 0;

}
