#include <stdio.h>

// Protótipos das funções
int validaQuantidade(int quantidade);
float calculaSalario(int quantidade);
void mostraFinal(int quantidade, float salario);

int main() {
    int quantidade;

    // Loop para solicitar a quantidade de peças fabricadas por cada funcionário
    while (1) {
        printf("Digite a quantidade de peças fabricadas pelo funcionário (ou -1 para sair): ");
        scanf("%d", &quantidade);

        // Verifica se o usuário deseja sair
        if (quantidade == -1) {
            break;
        }

        // Valida a quantidade de peças fabricadas
        if (validaQuantidade(quantidade)) {
            // Calcula e mostra o salário
            float salario = calculaSalario(quantidade);
            mostraFinal(quantidade, salario);
        } else {
            printf("Quantidade de peças inválida. Tente novamente.\n");
        }
    }

    return 0;
}

// Função para validar a quantidade de peças fabricadas
int validaQuantidade(int quantidade) {
    return quantidade >= 0; // Aceita somente valores não negativos
}

// Função para calcular o salário
float calculaSalario(int quantidade) {
    const float salarioBase = 600.0;
    const int limite1 = 50;
    const int limite2 = 80;
    const float adicional1 = 0.50;
    const float adicional2 = 0.75;

    float salario = salarioBase;

    // Adicional de produtividade baseado na quantidade de peças
    if (quantidade > limite1) {
        if (quantidade <= limite2) {
            salario += (quantidade - limite1) * adicional1;
        } else {
            salario += (limite2 - limite1) * adicional1 + (quantidade - limite2) * adicional2;
        }
    }

    return salario;
}

// Procedimento para mostrar o resultado final
void mostraFinal(int quantidade, float salario) {
    printf("O funcionário fabricou %d peças e receberá um salário de R$ %.2f.\n", quantidade, salario);
}


int main() {
    int quantidade;

    // Loop para solicitar a quantidade de peças fabricadas por cada funcionário
    while (1) {
        printf("Digite a quantidade de peças fabricadas pelo funcionário (ou -1 para sair): ");
        scanf("%d", &quantidade);

        // Verifica se o usuário deseja sair
        if (quantidade == -1) {
            break;
        }

        // Valida a quantidade de peças fabricadas
        if (validaQuantidade(quantidade)) {
            // Calcula e mostra o salário
            float salario = calculaSalario(quantidade);
            mostraFinal(quantidade, salario);
        } else {
            printf("Quantidade de peças inválida. Tente novamente.\n");
        }
    }

    return 0;
}
