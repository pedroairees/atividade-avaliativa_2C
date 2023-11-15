#include <stdio.h>

// Protótipos das funções
char obterSexo();
float obterSalario();
int validaSalario(float salario);
int validaSexo(char sexo);
void classificaSalario(float salario, char *classificacao);
void mostraClassificacao(float salario, char sexo);

int main() {
    int numAssalariados;
    int abaixoDoMinimo = 0;
    int acimaDoMinimo = 0;

    printf("Digite o número de assalariados a serem pesquisados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        char sexo = obterSexo();
        float salario = obterSalario();

        if (validaSexo(sexo) && validaSalario(salario)) {
            char classificacao[20];
            classificaSalario(salario, classificacao);
            mostraClassificacao(salario, sexo);

            // Conta a quantidade de assalariados acima ou abaixo do salário mínimo
            if (salario < 1400.0) {
                abaixoDoMinimo++;
            } else if (salario > 1400.0) {
                acimaDoMinimo++;
            }
        } else {
            printf("Dados inválidos. Tente novamente.\n");
            i--;  // Decrementa i para repetir a leitura dos dados
        }
    }

    // Resultado final
    printf("\nResumo:\n");
    printf("Assalariados abaixo do salário mínimo: %d\n", abaixoDoMinimo);
    printf("Assalariados acima do salário mínimo: %d\n", acimaDoMinimo);

    return 0;
}

// Função para obter o sexo do assalariado
char obterSexo() {
    char sexo;
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    return sexo;
}

// Função para obter o salário do assalariado
float obterSalario() {
    float salario;
    printf("Digite o salário do assalariado (maior que R$1,00): ");
    scanf("%f", &salario);
    return salario;
}

// Função para validar o salário
int validaSalario(float salario) {
    return salario > 1.0;
}

// Função para validar o sexo
int validaSexo(char sexo) {
    return sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f';
}

// Função para classificar o salário em relação ao salário mínimo
void classificaSalario(float salario, char *classificacao) {
    if (salario < 1400.0) {
        strcpy(classificacao, "Abaixo do salário mínimo");
    } else if (salario > 1400.0) {
        strcpy(classificacao, "Acima do salário mínimo");
    } else {
        strcpy(classificacao, "Igual ao salário mínimo");
    }
}

// Procedimento para mostrar os resultados finais
void mostraClassificacao(float salario, char sexo) {
    char classificacao[20];
    classificaSalario(salario, classificacao);

    printf("\nResultado para o assalariado:\n");
    printf("Salário: R$ %.2f\n", salario);
    printf("Classificação em relação ao salário mínimo: %s\n", classificacao);
    printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
}

int main() {
    int numAssalariados;
    int abaixoDoMinimo = 0;
    int acimaDoMinimo = 0;

    printf("Digite o número de assalariados a serem pesquisados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        char sexo = obterSexo();
        float salario = obterSalario();

        if (validaSexo(sexo) && validaSalario(salario)) {
            char classificacao[20];
            classificaSalario(salario, classificacao);
            mostraClassificacao(salario, sexo);

            // Conta a quantidade de assalariados acima ou abaixo do salário mínimo
            if (salario < 1400.0) {
                abaixoDoMinimo++;
            } else if (salario > 1400.0) {
                acimaDoMinimo++;
            }
        } else {
            printf("Dados inválidos. Tente novamente.\n");
            i--;  // Decrementa i para repetir a leitura dos dados
        }
    }

    // Resultado final
    printf("\nResumo:\n");
    printf("Assalariados abaixo do salário mínimo: %d\n", abaixoDoMinimo);
    printf("Assalariados acima do salário mínimo: %d\n", acimaDoMinimo);

    return 0;
}
