
#include <stdio.h>
#include <locale.h>

//FUNÇÕES

// Função para exibir o menu
void exibirMenu() {
    system("cls || clear"); // Limpa o terminal
    printf("\n==============================\n");
    printf("         \033[1;34mMENU PRINCIPAL\033[0m         \n");
    printf("==============================\n");
    printf("\033[1;32m[1]\033[0m Comprimento\n");
    printf("\033[1;32m[2]\033[0m Temperatura\n");
    printf("\033[1;32m[3]\033[0m Opcao 3\n");
    printf("\033[1;32m[0]\033[0m Sair\n");
    printf("==============================\n");
    printf("Escolha qual conversao deseja fazer: ");
}

 //Função Comprimento
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
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}
void InterfaceConversaoComprimento(){
    setlocale(LC_ALL,NULL);

    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("=====================================================================\n");
	printf("         \033[1;34mConversor de unidades de comprimento\033[0m         \n");
	printf("=====================================================================\n");
    //printf("Conversor de unidades de comprimento\n");
//    printf("\033[1;32m[1]\033[0m  Metros\n");
//    printf("\033[1;32m[2]\033[0m  Centimetros\n");
//    printf("\033[1;32m[3]\033[0m  Milimetros\n");

    // Verifica entrada do valor
    while (1) {
    	printf("\n");
        printf("\033[1;32m->\033[0m Digite o Valor a Ser Convertido: ");
        if (scanf("%lf", &valor) == 1 && valor >= 0) {
            break;
        } else {
            printf("Valor inválido! Digite um número positivo.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
        printf("==============================\n");
    }

    // Verifica entrada da unidade de origem
    while (1) {
    		printf("===================================================================\n");
    		printf("	 \033[1;34mSelecione o Valor de Origem:\033[0m         \n");
    		printf("===================================================================\n");
            printf("\033[1;32m[1]\033[0m  Metros\n");
   			printf("\033[1;32m[2]\033[0m  Centimetros\n");
    		printf("\033[1;32m[3]\033[0m  Milimetros\n");
    		printf("==============================\n");
        if (scanf("%d", &unidadeOrigem) == 1 && (unidadeOrigem >= 1 && unidadeOrigem <= 3)) {
            break;
        } else {
            printf("Unidade de origem invalida! Escolha 1, 2 ou 3.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    // Verifica entrada da unidade de destino
    while (1) {
        printf("===================================================================\n");
    	printf("	 \033[1;34mSelecione o Valor de Destino:\033[0m         \n");
    	printf("===================================================================\n");
        printf("\033[1;32m[1]\033[0m  Metros\n");
   		printf("\033[1;32m[2]\033[0m  Centimetros\n");
    	printf("\033[1;32m[3]\033[0m  Milimetros\n");
    	printf("==============================\n");
        if (scanf("%d", &unidadeDestino) == 1 && (unidadeDestino >= 1 && unidadeDestino <= 3)) {
            break;
        } else {
            printf("\033[1;32m->\033[0m Unidade de destino inválida! Escolha 1, 2 ou 3.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    converterUnidades(valor, unidadeOrigem, unidadeDestino);
}

//Função Temperatira

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
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
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
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
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
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

void InterfaceConversaoTemperatura(){
    double valor;
    int escolha;
    
	printf("=====================================================================\n");
	printf("            \033[1;34mConversor de Temperatura\033[0m         \n");
	printf("=====================================================================\n");
    printf("\033[1;32m->\033[0m Digite o valor que deseja converter: ");
    scanf("%lf", &valor);


	printf("=======================================================\n");
	printf("\033[1;34mDigite a temperatura de Origem:\033[0m         \n");
	printf("=======================================================\n");
	
    printf("\033[1;32m[1]\033[0m  Celsius\n");
   	printf("\033[1;32m[2]\033[0m  Kelvin\n");
    printf("\033[1;32m[3]\033[0m  Fahrenheit\n");
    printf("==============================\n");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 3) {
        printf("\033[1;32m->\033[0m Escolha invalida\n");
        return;
    }

	printf("=======================================================\n");
	printf("\033[1;34mDigite a temperatura de Destino:\033[0m         \n");
	printf("=======================================================\n");
	
    printf("\033[1;32m[1]\033[0m  Celsius\n");
   	printf("\033[1;32m[2]\033[0m  Kelvin\n");
    printf("\033[1;32m[3]\033[0m  Fahrenheit\n");
    printf("==============================\n");
    int destino;
    scanf("%d", &destino);

    if (destino < 1 || destino > 3) {
        printf("\033[1;32m->\033[0m Escolha invalida\n");
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


int main() {

    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n\033[1;36mVoce escolheu a Comprimento!\033[0m\n");
                system("pause"); // Pausar o terminal
                system("cls || clear"); // Limpa o terminal
                InterfaceConversaoComprimento();
                break;
            case 2:
                printf("\n\033[1;36mVoce escolheu a Temperatura!\033[0m\n");
                system("pause"); // Pausar o terminal
                system("cls || clear"); // Limpa o terminal
                InterfaceConversaoTemperatura();
                break;
            case 3:
                printf("\n\033[1;36mVoce escolheu a Opcao 3!\033[0m\n");
                break;
            case 0:
                printf("\n\033[1;31mSaindo... Ate logo!\033[0m\n");
                break;
            default:
                printf("\n\033[1;31mOpcao invalida! Tente novamente.\033[0m\n");
        }

        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            getchar(); // Pega o Enter deixado no buffer
            getchar(); // Aguarda o usuário pressionar Enter
        }

    } while (opcao != 0);
    
    return 0;
}