//1 – Crie um programa com dois processos. As medidas de um terreno retangular devem ser
//lidas. O processo Filho deve calcular a área do terreno e o processo Pai o perímetro. Todos
//os resultados obtidos devem ser mostrados ao usuário.

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    float largura, comprimento;

    // Solicitar ao usuário as medidas do terreno
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    // Criando o processo filho
    pid_t pid = fork();

    if (pid == -1) {
        // Erro ao criar o processo filho
        perror("Erro ao criar o processo filho");
        exit(1);
    }

    if (pid == 0) {
        // Processo Filho: calcula a área
        float area = largura * comprimento;
        printf("Processo Filho: A área do terreno é %.2f m²\n", area);
        exit(0); // Finaliza o processo filho
    } else {
        // Processo Pai: calcula o perímetro
        float perimetro = 2 * (largura + comprimento);
        printf("Processo Pai: O perímetro do terreno é %.2f metros\n", perimetro);
        wait(NULL); // Espera o processo filho terminar
    }

    return 0;
}
