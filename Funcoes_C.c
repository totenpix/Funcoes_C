#include <stdio.h>
#include <string.h>

// Função para calcular a soma de dois números
void soma(int a, int b) {
    printf("A soma de %d e %d é: %d\n", a, b, a + b);
}

// Função para calcular a média de números
void media(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    printf("A média dos números é: %.2f\n", (float)soma / tamanho);
}

// Função para exibir os nomes armazenados em um vetor
void exibirNomes(char nomes[][50], int tamanho) {
    printf("Nomes armazenados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s\n", nomes[i]);
    }
}

// Funções da calculadora
int adicao(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return (float)a / b;
}

// Função para ler o nome de um usuário
void lerNome(char nome[]) {
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha
}

// Função para exibir uma mensagem ao usuário
void exibirMensagem(char nome[]) {
    printf("Olá, %s! Seja bem-vindo(a)!\n", nome);
}

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Apenas consome os caracteres restantes no buffer
    }
}

// Função para exibir o menu da calculadora
void menuCalculadora() {
    printf("\nEscolha a operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite sua escolha: ");
}

int main() {
    // Exercício 1: Soma de dois números
    int num1, num2;
    printf("Exercício 1: Soma de dois números\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    soma(num1, num2);

    // Exercício 2: Média de cinco números
    printf("\nExercício 2: Média de cinco números\n");
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    media(numeros, 5);

    // Exercício 3: Armazenar e exibir nomes
    printf("\nExercício 3: Armazenar e exibir nomes\n");
    char nomes[3][50];
    limparBuffer(); // Limpa o buffer do teclado
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Remove o caractere de nova linha
    }
    exibirNomes(nomes, 3);

    // Exercício 4: Calculadora
    printf("\nExercício 4: Calculadora\n");
    int opcao, valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    menuCalculadora();
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado: %d\n", adicao(valor1, valor2));
            break;
        case 2:
            printf("Resultado: %d\n", subtracao(valor1, valor2));
            break;
        case 3:
            printf("Resultado: %d\n", multiplicacao(valor1, valor2));
            break;
        case 4:
            printf("Resultado: %.2f\n", divisao(valor1, valor2));
            break;
        default:
            printf("Operação inválida! Tente novamente.\n");
    }

    // Exercício 5: Leitura e exibição de nome
    printf("\nExercício 5: Leitura e exibição de nome\n");
    char nomeUsuario[50];
    limparBuffer(); // Limpa o buffer do teclado
    lerNome(nomeUsuario);
    exibirMensagem(nomeUsuario);

    return 0;
}