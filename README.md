# Embarcatech - Tarefa 1 - Depuração e Versionamento

# Conversor de Unidades

Este programa é um **Conversor de Unidades** que permite converter valores entre diferentes sistemas de medidas. Ele suporta conversões de comprimento, temperatura, massa, volume, tempo e velocidade.

## Funcionalidades

### 1. Comprimento

Converte unidades de comprimento entre:

- Metros (m)
- Centímetros (cm)
- Milímetros (mm)

### 2. Temperatura

Converte temperaturas entre:

- Celsius (°C)
- Kelvin (K)
- Fahrenheit (°F)

### 3. Massa

Converte unidades de massa entre:

- Quilogramas (kg)
- Gramas (g)
- Toneladas (t)

### 4. Volume

Converte unidades de volume entre:

- Litros (L)
- Mililitros (mL)
- Metros cúbicos (m³)

### 5. Tempo

Converte unidades de tempo entre:

- Horas
- Minutos
- Segundos

### 6. Velocidade

Converte unidades de velocidade entre:

- Quilômetros por hora (km/h)
- Metros por segundo (m/s)
- Milhas por hora (mph)

### 7. Bits

Converte unidades de bits entre:

- Bits
- Bytes
- Kilobytes
- Megabytes 
- Gigabytes 
- Terabytes

### 7. Area

Converte unidades de area entre:

- Metro Quadrado
- Centimetro Quadrado


## Como Usar

### Pré-requisitos

- Compilador C (ex.: GCC)
- Sistema operacional compatível com comandos como `system("cls")` ou `system("clear")`

### Passos para Compilação e Execução

1. **Baixe o arquivo `main.c`.**

2. **Compile o programa:**

   ```bash
   gcc main.c -o conversor
   ```

3. **Execute o programa:**
   ```bash
   ./conversor
   ```

### Navegação pelo Programa

1. Ao iniciar o programa, você verá um menu com as opções disponíveis:

   - `[1] Comprimento`
   - `[2] Temperatura`
   - `[3] Massa`
   - `[4] Volume`
   - `[5] Tempo`
   - `[6] Velocidade`
   - `[7] Dados (Bits, Bytes, KB, MB, GB, TB)`
   - `[8] Area`
   - `[0] Sair`

2. **Escolha uma opção digitando o número correspondente** e pressione `Enter`.

3. Siga as instruções na tela para fornecer:

   - O valor que deseja converter.
   - A unidade de origem.
   - A unidade de destino.

4. O programa exibirá o resultado da conversão.

5. **Para sair, selecione a opção `[0]`.**

### Exemplos de Uso

#### Conversão de Comprimento

- Escolha a opção `1` no menu.
- Digite o valor, a unidade de origem (ex.: metros) e a unidade de destino (ex.: centímetros).
- O resultado será exibido na tela.

#### Conversão de Temperatura

- Escolha a opção `2` no menu.
- Insira a temperatura inicial (ex.: 25°C), selecione a unidade de origem (ex.: Celsius) e a unidade de destino (ex.: Kelvin).
- O resultado será exibido.

### Observações

- Para limpar a tela, o programa utiliza `system("cls")` (Windows) ou `system("clear")` (Linux/Mac). Certifique-se de que seu sistema suporta este comando.
- Para evitar erros de entrada, o programa valida os valores digitados.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para melhorar o programa ou adicionar novas funcionalidades.

1. Faça um _fork_ do repositório.
2. Crie uma nova _branch_ para suas alterações:
   ```bash
   git checkout -b minha-alteracao
   ```
3. Envie um _pull request_ após concluir as modificações.

## Colaboradores

Abaixo estão listados os colaboradores deste projeto  e suas contribuições:

- [nicassiosantos](https://github.com/nicassiosantos) (Conversão de Comprimento)
- [EvertonEspedito](https://github.com/EvertonEspedito) (Menu de escolhas de conversões)
- [ericksonsmoura](https://github.com/ericksonsmoura) (Conversão de velocidade)
- [DiegoPSP](https://github.com/DiegoPSP) (Conversão de Tempo)
- [henr1queSantos25](https://github.com/henr1queSantos25) (Conversão de Massa) 
- [OsanaThiago](https://github.com/OsanaThiago) (Conversão de volume)
- [João Pasip](https://github.com/joao-pasip) (Conversão de Bits) 
- [Marcus Vinicius](https://github.com/MarcusVMFF) (Conversão de Temperatura)
- [Asafe Santana](https://github.com/AsafeSantana) (Conversão de Área)
