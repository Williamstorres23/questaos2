#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    char nome[50];
    struct Data nascimento;
};


int comparaDatas(struct Data d1, struct Data d2) {
    if (d1.ano > d2.ano) return 1;
    if (d1.ano < d2.ano) return -1;
    if (d1.mes > d2.mes) return 1;
    if (d1.mes < d2.mes) return -1;
    if (d1.dia > d2.dia) return 1;
    if (d1.dia < d2.dia) return -1;
    return 0;  // Datas iguais
}

int main() {
    struct Pessoa pessoas[6];
    struct Pessoa mais_nova, mais_velha;

    
    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Digite a data de nascimento (dd mm aaaa) da pessoa %d: ", i + 1);
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    }

    mais_nova = pessoas[0];
    mais_velha = pessoas[0];

    for (int i = 1; i < 6; i++) {
        if (comparaDatas(pessoas[i].nascimento, mais_nova.nascimento) > 0) {
            mais_nova = pessoas[i];
        }
        if (comparaDatas(pessoas[i].nascimento, mais_velha.nascimento) < 0) {
            mais_velha = pessoas[i];
        }
    }

    printf("A pessoa mais nova é: %s\n", mais_nova.nome);
    printf("A pessoa mais velha é: %s\n", mais_velha.nome);

    return 0;
}
