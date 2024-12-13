# Embarcatech - Tarefa 1 - Depuração e Versionamento

#include <stdio.h>

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

int main(){
    InterfaceConversaoTemperatura();
    return 0;
}
