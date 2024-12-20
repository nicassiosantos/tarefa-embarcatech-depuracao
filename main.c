#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// FUNÇÕES

// Função para exibir o menu
void exibirMenu()
{
    system("cls || clear"); // Limpa o terminal
    printf("\n==============================\n");
    printf("         \033[1;34mMENU PRINCIPAL\033[0m         \n");
    printf("==============================\n");
    printf("\033[1;32m[1]\033[0m Comprimento\n");
    printf("\033[1;32m[2]\033[0m Temperatura\n");
    printf("\033[1;32m[3]\033[0m Massa\n");
    printf("\033[1;32m[4]\033[0m Volume\n");
    printf("\033[1;32m[5]\033[0m Tempo\n");
    printf("\033[1;32m[6]\033[0m Velocidade\n");
    printf("\033[1;32m[7]\033[0m Dados (Bits, Bytes, KB, MB, GB, TB)\n");
    printf("\033[1;32m[0]\033[0m Sair\n");
    printf("==============================\n");
    printf("Escolha qual conversao deseja fazer: ");
}

// Função Comprimento
void converterUnidades(double valor, int unidadeOrigem, int unidadeDestino)
{
    double resultado;

    // Converte o valor para metros como base
    if (unidadeOrigem == 1)
    { // Metro
        resultado = valor;
    }
    else if (unidadeOrigem == 2)
    { // Centímetro
        resultado = valor / 100;
    }
    else if (unidadeOrigem == 3)
    { // Milímetro
        resultado = valor / 1000;
    }
    else
    {
        printf("Unidade de origem inválida!\n");
        return;
    }

    // Converte de metros para a unidade de destino
    if (unidadeDestino == 1)
    { // Metro
        resultado = resultado;
    }
    else if (unidadeDestino == 2)
    { // Centímetro
        resultado = resultado * 100;
    }
    else if (unidadeDestino == 3)
    { // Milímetro
        resultado = resultado * 1000;
    }
    else
    {
        printf("Unidade de destino inválida!\n");
        return;
    }

    // Imprime o resultado
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

void InterfaceConversaoComprimento()
{
    setlocale(LC_ALL, NULL);

    double valor;
    int unidadeOrigem, unidadeDestino;
    printf("=====================================================================\n");
    printf("         \033[1;34mConversor de unidades de comprimento\033[0m         \n");
    printf("=====================================================================\n");
    // printf("Conversor de unidades de comprimento\n");
    //    printf("\033[1;32m[1]\033[0m  Metros\n");
    //    printf("\033[1;32m[2]\033[0m  Centimetros\n");
    //    printf("\033[1;32m[3]\033[0m  Milimetros\n");

    // Verifica entrada do valor
    while (1)
    {
        printf("\n");
        printf("\033[1;32m->\033[0m Digite o Valor a Ser Convertido: ");
        if (scanf("%lf", &valor) == 1 && valor >= 0)
        {
            break;
        }
        else
        {
            printf("Valor inválido! Digite um número positivo.\n");
            while (getchar() != '\n')
                ; // Limpa o buffer de entrada
        }
        printf("==============================\n");
    }

    // Verifica entrada da unidade de origem
    while (1)
    {
        printf("===================================================================\n");
        printf("	 \033[1;34mSelecione o Valor de Origem:\033[0m         \n");
        printf("===================================================================\n");
        printf("\033[1;32m[1]\033[0m  Metros\n");
        printf("\033[1;32m[2]\033[0m  Centimetros\n");
        printf("\033[1;32m[3]\033[0m  Milimetros\n");
        printf("==============================\n");
        if (scanf("%d", &unidadeOrigem) == 1 && (unidadeOrigem >= 1 && unidadeOrigem <= 3))
        {
            break;
        }
        else
        {
            printf("Unidade de origem invalida! Escolha 1, 2 ou 3.\n");
            while (getchar() != '\n')
                ; // Limpa o buffer de entrada
        }
    }

    // Verifica entrada da unidade de destino
    while (1)
    {
        printf("===================================================================\n");
        printf("	 \033[1;34mSelecione o Valor de Destino:\033[0m         \n");
        printf("===================================================================\n");
        printf("\033[1;32m[1]\033[0m  Metros\n");
        printf("\033[1;32m[2]\033[0m  Centimetros\n");
        printf("\033[1;32m[3]\033[0m  Milimetros\n");
        printf("==============================\n");
        if (scanf("%d", &unidadeDestino) == 1 && (unidadeDestino >= 1 && unidadeDestino <= 3))
        {
            break;
        }
        else
        {
            printf("\033[1;32m->\033[0m Unidade de destino inválida! Escolha 1, 2 ou 3.\n");
            while (getchar() != '\n')
                ; // Limpa o buffer de entrada
        }
    }

    converterUnidades(valor, unidadeOrigem, unidadeDestino);
}

// Função Temperatura

void converterCelsius(int escolha, double valor)
{
    double resultado;
    if (escolha == 1)
    {
        resultado = valor;
    }
    if (escolha == 2)
    {
        resultado = valor + 273.15;
    }
    if (escolha == 3)
    {
        resultado = (valor * 1.8) + 32;
    }
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

void converterKelvin(int escolha, double valor)
{
    double resultado;
    if (escolha == 1)
    {
        resultado = valor - 273.15;
    }
    if (escolha == 2)
    {
        resultado = valor;
    }
    if (escolha == 3)
    {
        resultado = ((valor - 273.15) * 1.8) + 32;
    }
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

void converterFahrenheit(int escolha, double valor)
{
    double resultado;
    if (escolha == 1)
    {
        resultado = (valor - 32) / 1.8;
    }
    if (escolha == 2)
    {
        resultado = ((valor - 32) * 5.0 / 9.0) + 273.15;
    }
    if (escolha == 3)
    {
        resultado = valor;
    }
    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

void InterfaceConversaoTemperatura() // Interface da Conversão
{
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

    if (escolha < 1 || escolha > 3)
    {
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

    if (destino < 1 || destino > 3)
    {
        printf("\033[1;32m->\033[0m Escolha invalida\n");
        return;
    }
=======



// Função Massa

void converterUnidadesMassa(int origem, int destino, double valor)
{
    double resultado;

    // transformando o valor de origem para o valor base (quilograma)
    if (origem == 1)
    {
        resultado = valor;
    }
    else if (origem == 2)
    {
        resultado = valor / 1000;
    }
    else if (origem == 3)
    {
        resultado = valor * 1000;
    }

    // convertendo de quilograma para a unidade de destino
    if (destino == 1)
    {
        resultado = resultado;
    }
    else if (destino == 2)
    {
        resultado *= 1000;
    }
    else if (destino == 3)
    {
        resultado /= 1000;
    }

    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

void InterfaceConversaoMassa()
{
    double valor;
    int unidadeOrigem;
    int unidadeDestino;

    printf("=====================================================================\n");
    printf("            \033[1;34mConversor de Massa\033[0m         \n");
    printf("=====================================================================\n");
    printf("\033[1;32m->\033[0m Digite o valor que deseja converter: \n");
    scanf("%lf", &valor);
    while (getchar() != '\n')
        ;

    do
    {
        printf("=======================================================\n");
        printf("\033[1;34mDigite a massa de Origem:\033[0m         \n");
        printf("=======================================================\n");

        printf("\033[1;32m[1]\033[0m  Quilograma\n");
        printf("\033[1;32m[2]\033[0m  Grama\n");
        printf("\033[1;32m[3]\033[0m  Tonelada\n");
        printf("==============================\n");
        scanf("%d", &unidadeOrigem);

        if (unidadeOrigem >= 1 && unidadeOrigem <= 3)
        {
            break;
        }
        else
        {
            printf("\033[1;32m->\033[0m Escolha invalida\n");
            while (getchar() != '\n')
                ;
        }
    } while (1);

    do
    {
        printf("\n=======================================================\n");
        printf("\033[1;34mDigite a massa de Destino:\033[0m         \n");
        printf("=======================================================\n");

        printf("\033[1;32m[1]\033[0m  Quilograma\n");
        printf("\033[1;32m[2]\033[0m  Grama\n");
        printf("\033[1;32m[3]\033[0m  Tonelada\n");
        printf("==============================\n");
        scanf("%d", &unidadeDestino);
        while (getchar() != '\n')
            ;

        if (unidadeDestino > 0 && unidadeDestino < 4)
        {
            break;
        }
        else
        {
            printf("\033[1;32m->\033[0m Escolha invalida\n");
        }
    } while (1);

    converterUnidadesMassa(unidadeOrigem, unidadeDestino, valor);
}
// CONVERSÃO VOLUME

void convLitro(float v1, int unidade1, int unidade2)
{ // conversão para litro
    float convertido;
    if (unidade1 == 1 && unidade2 == 1)
    {
        printf("%2f litros sao equivalente a %f litros", v1, v1);
    }
    else if (unidade1 == 1 && unidade2 == 2)
    {
        convertido = v1 * 1000;
        printf("%.2f litros sao equivalente a %f Mililitros", v1, convertido);
    }
    else if (unidade1 == 1 && unidade2 == 3)
    {
        convertido = v1 / 1000;
        printf("%2f litros sao equivalente a %f Metro Cubicos", v1, convertido);
    }
}

void convMili(float v1, int unidade1, int unidade2)
{ // conversão para mililitros
    float convertido;
    if (unidade1 == 2 && unidade2 == 1)
    {
        convertido = v1 / 1000;
        printf("%f Mililitros sao equivalente a %f litros", v1, convertido);
    }
    else if (unidade1 == 2 && unidade2 == 2)
    {
        printf("%.2f Mililitros sao equivalente a %f Mililitros", v1, v1);
    }
    else if (unidade1 == 2 && unidade2 == 3)
    {
        convertido = v1 / 1000000;
        printf("%2f Mililitros sao equivalente a %f Metro Cubicos", v1, convertido);
    }
}

void convMC(float v1, int unidade1, int unidade2)
{ // conversão para metro cúbico
    float convertido;
    if (unidade1 == 3 && unidade2 == 1)
    {
        convertido = v1 * 1000;
        printf("%2f Metro Cubico sao equivalente a %f litros", v1, convertido);
    }
    else if (unidade1 == 3 && unidade2 == 2)
    {
        convertido = v1 * 1000000;
        printf("%.2f Metro Cubico sao equivalente a %f Mililitros", v1, convertido);
    }
    else if (unidade1 == 3 && unidade2 == 3)
    {
        printf("%2f Metro Cubico sao equivalente a %f Metro Cubicos", v1, v1);
    }
}

void InterfaceConversaoVolume()
{
    int a, b;
    float valor;

    printf("=======================================================\n");
    printf("\033[1;34mDigite o Volume de origem:\033[0m         \n");
    printf("=======================================================\n");
    printf("\033[1;32m[1]\033[0m  Litro\n");
    printf("\033[1;32m[2]\033[0m  Mililitro\n");
    printf("\033[1;32m[3]\033[0m  Metro Cúbico\n");
    printf("==============================\n");
    scanf("%d", &a);

    if (a > 3 || a < 0)
    {
        printf("Numero invalido. Tente novamente.");
        return;
    }

    printf("\033[1;32m->\033[0m Digite o valor de origem: ");
    scanf("%f", &valor);

    system("cls");
    printf("==============================\n");
    printf("\n\033[1;34mSelecione uma unidade de medida para conversao:\033[0m  \n");
    printf("\033[1;32m[1]\033[0m  Litro\n");
    printf("\033[1;32m[2]\033[0m  Mililitro\n");
    printf("\033[1;32m[3]\033[0m  Metro Cubico\n");
    printf("==============================\n");
    scanf("%d", &b);

    if (a == 1)
    {
        convLitro(valor, a, b);
    }
    else if (a == 2)
    {
        convMili(valor, a, b);
    }
    else
    {
        convMC(valor, a, b);
    }
}

// Funções de conversão de tempo
void horas_para_minutos_e_segundos(double horas)
{
    double minutos = horas * 60;
    double segundos = horas * 3600;
    printf("%.2f horas equivalem a %.2f minutos e %.2f segundos.\n", horas, minutos, segundos);
}

void minutos_para_horas_e_segundos(double minutos)
{
    double horas = minutos / 60;
    double segundos = minutos * 60;
    printf("%.2f minutos equivalem a %.2f horas e %.2f segundos.\n", minutos, horas, segundos);
}

void segundos_para_horas_e_minutos(double segundos)
{
    double horas = segundos / 3600;
    double minutos = segundos / 60;
    printf("%.2f segundos equivalem a %.2f horas e %.2f minutos.\n", segundos, horas, minutos);
}

void InterfaceConversaoTempo()
{
    double valor;
    int opcao;

    printf("=====================================================================\n");
    printf("            \033[1;34mConversor de Tempo\033[0m         \n");
    printf("=====================================================================\n");
    printf("\033[1;32m->\033[0m Digite o valor de tempo para converter: ");
    scanf("%lf", &valor);

    do
    {
        printf("=====================================================================\n");
        printf("Selecione a unidade de origem:\n");
        printf("\033[1;32m[1]\033[0m Horas\n");
        printf("\033[1;32m[2]\033[0m Minutos\n");
        printf("\033[1;32m[3]\033[0m Segundos\n");
        printf("==============================\n");
        printf("\033[1;32m->\033[0m Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            horas_para_minutos_e_segundos(valor);
        }
        else if (opcao == 2)
        {
            minutos_para_horas_e_segundos(valor);
        }
        else if (opcao == 3)
        {
            segundos_para_horas_e_minutos(valor);
        }
        else
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao < 1 || opcao > 3);
}

// Função para converter de km/h para m/s e mph
void converterDeKmH(double valor)
{
    double metrosPorSegundo = valor / 3.6;
    double milhasPorHora = valor / 1.609;
    printf("%.2f km/h equivale a %.2f m/s e %.2f mph\n", valor, metrosPorSegundo, milhasPorHora);
}

// Função para converter de m/s para km/h e mph
void converterDeMs(double valor)
{
    double quilometrosPorHora = valor * 3.6;
    double milhasPorHora = quilometrosPorHora / 1.609;
    printf("%.2f m/s equivale a %.2f km/h e %.2f mph\n", valor, quilometrosPorHora, milhasPorHora);
}

// Função para converter de mph para km/h e m/s
void converterDeMph(double valor)
{
    double quilometrosPorHora = valor * 1.609;
    double metrosPorSegundo = quilometrosPorHora / 3.6;
    printf("%.2f mph equivale a %.2f km/h e %.2f m/s\n", valor, quilometrosPorHora, metrosPorSegundo);
}

void iniciarConversor()
{
    int opcao;
    double valor;

    printf("Conversor de unidades de velocidade\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Quilômetros por hora (km/h)\n");
    printf("2 - Metros por segundo (m/s)\n");
    printf("3 - Milhas por hora (mph)\n");

    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return;
    }

    printf("Digite o valor da velocidade: ");
    scanf("%lf", &valor);

    switch (opcao)
    {
    case 1:
        converterDeKmH(valor);
        break;
    case 2:
        converterDeMs(valor);
        break;
    case 3:
        converterDeMph(valor);
        break;
    default:
        printf("Opção inválida!\n");
    }
}

// Conversão de unidades de dados
void converterDados(double valor, int unidadeOrigem, int unidadeDestino)
{
    double resultado;

    // Converte o valor para bits como base
    if (unidadeOrigem == 1)
    { // Bits
        resultado = valor;
    }
    else if (unidadeOrigem == 2)
    { // Bytes
        resultado = valor * 8;
    }
    else if (unidadeOrigem == 3)
    { // Kilobytes (KB)
        resultado = valor * 8 * 1024;
    }
    else if (unidadeOrigem == 4)
    { // Megabytes (MB)
        resultado = valor * 8 * 1024 * 1024;
    }
    else if (unidadeOrigem == 5)
    { // Gigabytes (GB)
        resultado = valor * 8 * 1024 * 1024 * 1024;
    }
    else if (unidadeOrigem == 6)
    { // Terabytes (TB)
        resultado = valor * 8 * 1024 * 1024 * 1024 * 1024;
    }
    else
    {
        printf("Unidade de origem inválida!\n");
        return;
    }

    // Converte de bits para a unidade de destino
    if (unidadeDestino == 1)
    { // Bits
        resultado = resultado;
    }
    else if (unidadeDestino == 2)
    { // Bytes
        resultado = resultado / 8;
    }
    else if (unidadeDestino == 3)
    { // Kilobytes (KB)
        resultado = resultado / (8 * 1024);
    }
    else if (unidadeDestino == 4)
    { // Megabytes (MB)
        resultado = resultado / (8 * 1024 * 1024);
    }
    else if (unidadeDestino == 5)
    { // Gigabytes (GB)
        resultado = resultado / (8 * 1024 * 1024 * 1024);
    }
    else if (unidadeDestino == 6)
    { // Terabytes (TB)
        resultado = resultado / (8 * 1024 * 1024 * 1024 * 1024);
    }
    else
    {
        printf("Unidade de destino inválida!\n");
        return;
    }

    printf("\033[1;32m->\033[0m Resultado: %.2f\n", resultado);
}

// Conversor de unidades de dados
void InterfaceConversaoDados()
{
    setlocale(LC_ALL, NULL);

    double valor;
    int unidadeOrigem, unidadeDestino;

    printf("=====================================================================\n");
    printf("         \033[1;34mConversor de unidades de dados (Bits, Bytes, KB, MB, GB, TB)\033[0m         \n");
    printf("=====================================================================\n");

    while (1)
    {
        printf("\033[1;32m->\033[0m Digite o Valor a Ser Convertido: ");
        if (scanf("%lf", &valor) == 1 && valor >= 0)
        {
            break;
        }
        else
        {
            printf("Valor inválido! Digite um número positivo.\n");
            while (getchar() != '\n')
                ;
        }
    }

    while (1)
    {
        printf("===================================================================\n");
        printf("    \033[1;34mSelecione a Unidade de Origem:\033[0m \n");
        printf("===================================================================\n");
        printf("\033[1;32m[1]\033[0m  Bits\n");
        printf("\033[1;32m[2]\033[0m  Bytes\n");
        printf("\033[1;32m[3]\033[0m  Kilobytes (KB)\n");
        printf("\033[1;32m[4]\033[0m  Megabytes (MB)\n");
        printf("\033[1;32m[5]\033[0m  Gigabytes (GB)\n");
        printf("\033[1;32m[6]\033[0m  Terabytes (TB)\n");
        printf("==============================\n");
        if (scanf("%d", &unidadeOrigem) == 1 && (unidadeOrigem >= 1 && unidadeOrigem <= 6))
        {
            break;
        }
        else
        {
            printf("Unidade de origem inválida! Escolha uma unidade válida.\n");
            while (getchar() != '\n')
                ;
        }
    }

    while (1)
    {
        printf("===================================================================\n");
        printf("    \033[1;34mSelecione a Unidade de Destino:\033[0m \n");
        printf("===================================================================\n");
        printf("\033[1;32m[1]\033[0m  Bits\n");
        printf("\033[1;32m[2]\033[0m  Bytes\n");
        printf("\033[1;32m[3]\033[0m  Kilobytes (KB)\n");
        printf("\033[1;32m[4]\033[0m  Megabytes (MB)\n");
        printf("\033[1;32m[5]\033[0m  Gigabytes (GB)\n");
        printf("\033[1;32m[6]\033[0m  Terabytes (TB)\n");
        printf("==============================\n");
        if (scanf("%d", &unidadeDestino) == 1 && (unidadeDestino >= 1 && unidadeDestino <= 6))
        {
            break;
        }
        else
        {
            printf("Unidade de destino inválida! Escolha uma unidade válida.\n");
            while (getchar() != '\n')
                ;
        }
    }

    converterDados(valor, unidadeOrigem, unidadeDestino);
}

int main()
{

    int opcao;

    do
    {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n\033[1;36mVoce escolheu a Comprimento!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            InterfaceConversaoComprimento();
            break;
        case 2:
            printf("\n\033[1;36mVoce escolheu a Temperatura!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            InterfaceConversaoTemperatura();
            break;
        case 3:
            printf("\n\033[1;36mVoce escolheu a Massa!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            InterfaceConversaoMassa();
            break;
        case 4:
            printf("\n\033[1;36mVoce escolheu o Volume!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            InterfaceConversaoVolume();
            break;
        case 5:
            printf("\n\033[1;36mVoce escolheu o Tempo!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            InterfaceConversaoTempo();
            break;
        case 6:
            printf("\n\033[1;36mVoce escolheu o Velocidade!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            iniciarConversor();
            break;
        case 7:
            printf("\n\033[1;36mVoce escolheu o Conversão de Dados!\033[0m\n");
            system("pause");        // Pausar o terminal
            system("cls || clear"); // Limpa o terminal
            InterfaceConversaoDados();
            break;
        case 0:
            printf("\n\033[1;31mSaindo... Ate logo!\033[0m\n");
            break;
        default:
            printf("\n\033[1;31mOpcao invalida! Tente novamente.\033[0m\n");
        }

        if (opcao != 0)
        {
            printf("\nPressione Enter para continuar...");
            getchar(); // Pega o Enter deixado no buffer
            getchar(); // Aguarda o usuário pressionar Enter
        }

    } while (opcao != 0);

    return 0;
}