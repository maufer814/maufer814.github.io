#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "headers.h"

 // Vers�o 0.0.2
    // Coletar dados (nome, altura, peso, idade e sexo)
    // Verifica��o de idade e sexo
    // *Uso de Fun��es
    // Aplicar na f�rmula de calculo de IMC
    // Verificar se o imc gerado �: Muito abaixo do peso, Abaixo do peso, Normal, Sobrepeso, Obesidade, Obesidade ||
    // Imprimir Dados (Nome, sexo, idade, altura, peso, imc gerado, avalia��o final e possiveis riscos a sa�de do indiv�duo)


int main(){

    setlocale(LC_ALL, "Portuguese");

    int altura, peso, idade = 0;
    float IMC = 0;
    char sexo, nome[100];  // Definir nome como uma string

     printf("\n----------------------------------------------------------------------------\n");
     printf("CALCULADORA DE IMC (�ndica de Massa Corporal) - Vers�o 0.0.2\n");
     printf("Desenvolvido por Maur�cio Fernandes Ferreira\n");
      printf("------------------------------------------------------------------------------\n\n");




    // Coletar dados
    printf("Nome: ");
    scanf("%99[^\n]", nome);  // L� o nome com espa�os

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);  // O espa�o antes de %c � para evitar ler um caractere residual

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura (cm): ");
    scanf("%d", &altura);

    printf("Peso (kg): ");
    scanf("%d", &peso);

    // Verifica��o de sexo e idade
    verificaSexo(sexo);
    verificaIdade(idade);

    // C�lculo do IMC
    IMC = calculaIMC(altura, peso);

    // Limpar a tela
    system("cls");

    // Imprimir resultados
    printf("\n------------------------------------\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);

    printf("Sexo:" );
    imprimeSexo(sexo);

    printf("Altura: %.2f m\n", altura/100.0);
    printf("Peso: %d kg\n", peso);
     printf("--------------------------------------\n");
    printf("IMC: %.2f\n", IMC);

    printf("Resultado Final: ");
    resultadoIMC(IMC);

    printf("\n-------------------------------------\n");
    return 0;
}
