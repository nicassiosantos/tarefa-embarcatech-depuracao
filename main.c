#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void converterCelsius(int escolha, double valor){
    double resultado;
    if (escolha == 1) {
        resultado = valor;
    }
    if (escolha == 2) {
        resultado = valor + 273.15;
    }
    if (escolha == 3) {
        resultado = (valor * 1.8) + 32;
    }
    printf("Resultado: %.2f\n", resultado);
}

void converterKelvin(int escolha, double valor){
    double resultado;
    if (escolha == 1) {
        resultado = valor - 273.15;
    }
    if (escolha == 2) {
        resultado = valor;
    }
    if (escolha == 3) {
        resultado = ((valor - 273.15) * 1.8) + 32;
    }
    printf("Resultado: %.2f\n", resultado);
}

void converterFahrenheit(int escolha, double valor){
    double resultado;
    if (escolha == 1) {
        resultado = (valor - 32) / 1.8;
    }
    if (escolha == 2) {
        resultado = ((valor - 32) * 5.0 / 9.0) + 273.15;
    }
    if (escolha == 3) {
        resultado = valor;
    }
    printf("Resultado: %.2f\n", resultado);
}

void converterUnidadesMassa(int origem, int destino, double valor){
    double resultado;
    

    //transformando o valor de origem para o valor base (quilograma)
    if(origem == 1){
        resultado = valor;
    }else if(origem == 2){
        resultado = valor / 1000;
    } else if(origem == 3){
        resultado = valor * 1000;
    }
    
    //convertendo de quilograma para a unidade de destino
    if(destino == 1){
        resultado = resultado;
    } else if (destino == 2){
        resultado *= 1000;
    } else if (destino == 3){
        resultado /= 1000;
    }

    printf("Resultado da conversao: %.2lf", resultado);
    
    
}

void InterfaceConversaoTemperatura(){
    double valor;
    int escolha;

    printf("Conversor de temperaturas\n");
    printf("Digite o valor que deseja converter: ");
    scanf("%lf", &valor);

    printf("Digite a temperatura de origem:\n");
    printf("1 - Celsius\n");
    printf("2 - Kelvin\n");
    printf("3 - Fahrenheit\n");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 3) {
        printf("Escolha invalida\n");
        return;
    }

    printf("Digite a temperatura para qual deseja converter:\n");
    printf("1 - Celsius\n");
    printf("2 - Kelvin\n");
    printf("3 - Fahrenheit\n");
    int destino;
    scanf("%d", &destino);

    if (destino < 1 || destino > 3) {
        printf("Escolha invalida\n");
        return;
    }

    if (escolha == 1) {
        converterCelsius(destino, valor);
    } else if (escolha == 2) {
        converterKelvin(destino, valor);
    } else if (escolha == 3) {
        converterFahrenheit(destino, valor);
    }
}

void InterfaceConversaoMassa(){
    double valor;
    int unidadeOrigem;
    int unidadeDestino;

    printf("CONVERSOR DE UNIDADES DE MASSA\n");

    printf("Digite o valor que deseja converter: \n");
    scanf("%lf", &valor);


    do{
        printf("1. Quilograma\n2.Grama\n3.Tonelada\n");
        printf("Escolha a unidade correspondente ao valor: \n");
        scanf("%d", &unidadeOrigem);

        if(unidadeOrigem > 0 && unidadeOrigem < 4){
            break;
        }else{
            printf("Digite uma opcao valida\n");
            while (getchar() != '\n');
        }
    }while(1);
    system("cls" || "clear"); //limpar tela

    do{
        printf("Para qual unidade de massa quer converter?\n");
        printf("1. Quilograma\n2.Grama\n3.Tonelada\n");
        scanf("%d", &unidadeDestino);

        if(unidadeDestino > 0 && unidadeDestino < 4){
            break;
        }else{
            printf("Digite uma opcao valida\n");
        }
    }while(1);
    system("cls" || "clear");

    converterUnidadesMassa(unidadeOrigem, unidadeDestino, valor);
}

void converterUnidades(double valor, int unidadeOrigem, int unidadeDestino) {
    double resultado;

    // Converte o valor para metros como base
    if (unidadeOrigem == 1) { // Metro
        resultado = valor;
    } else if (unidadeOrigem == 2) { // Centímetro
        resultado = valor / 100;
    } else if (unidadeOrigem == 3) { // Milímetro
        resultado = valor / 1000;
    } else {
        printf("Unidade de origem inválida!\n");
        return;
    }

    // Converte de metros para a unidade de destino
    if (unidadeDestino == 1) { // Metro
        resultado = resultado;
    } else if (unidadeDestino == 2) { // Centímetro
        resultado = resultado * 100;
    } else if (unidadeDestino == 3) { // Milímetro
        resultado = resultado * 1000;
    } else {
        printf("Unidade de destino inválida!\n");
        return;
    }

    // Imprime o resultado
    printf("Resultado: %.2f\n", resultado);
}

void InterfaceConversaoComprimento(){
    setlocale(LC_ALL,NULL);

    double valor;
    int unidadeOrigem, unidadeDestino;

    printf("Conversor de unidades de comprimento\n");
    printf("1 - Metros\n");
    printf("2 - Centímetros\n");
    printf("3 - Milímetros\n");

    // Verifica entrada do valor
    while (1) {
        printf("Digite o valor a ser convertido: ");
        if (scanf("%lf", &valor) == 1 && valor >= 0) {
            break;
        } else {
            printf("Valor inválido! Digite um número positivo.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    // Verifica entrada da unidade de origem
    while (1) {
        printf("Digite a unidade de origem (1 para metros, 2 para centímetros, 3 para milímetros): ");
        if (scanf("%d", &unidadeOrigem) == 1 && (unidadeOrigem >= 1 && unidadeOrigem <= 3)) {
            break;
        } else {
            printf("Unidade de origem inválida! Escolha 1, 2 ou 3.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    // Verifica entrada da unidade de destino
    while (1) {
        printf("Digite a unidade de destino (1 para metros, 2 para centímetros, 3 para milímetros): ");
        if (scanf("%d", &unidadeDestino) == 1 && (unidadeDestino >= 1 && unidadeDestino <= 3)) {
            break;
        } else {
            printf("Unidade de destino inválida! Escolha 1, 2 ou 3.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    converterUnidades(valor, unidadeOrigem, unidadeDestino);
}

int main() {

    InterfaceConversaoComprimento();
    InterfaceConversaoTemperatura(); 
    InterfaceConversaoMassa();
    
    return 0;
}