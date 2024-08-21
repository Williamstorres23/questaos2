#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
};

int main() {
    struct Atleta atletas[5];
    struct Atleta mais_alto, mais_velho;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].nome);

        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);

        printf("Digite a altura (em metros) do atleta %d: ", i + 1);
        scanf("%f", &atletas[i].altura);
    }

    mais_alto = atletas[0];
    mais_velho = atletas[0];

    for (int i = 1; i < 5; i++) {
        if (atletas[i].altura > mais_alto.altura) {
            mais_alto = atletas[i];
        }
        if (atletas[i].idade > mais_velho.idade) {
            mais_velho = atletas[i];
        }
    }

    printf("O atleta mais alto é: %s\n", mais_alto.nome);
    printf("O atleta mais velho é: %s\n", mais_velho.nome);

    return 0;
}