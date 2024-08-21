#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    
    int num_Matri;
    char nome_ALun[50];
    float notas[3];
    float media;

} aluno;

int main(){

    aluno alunos_Vet[3];
    
    float soma[3];
    float maior = 0.0;

            for(int i = 0; i < 1; i++){

                printf("Insira sua matricula: ");
                scanf("%d",& alunos_Vet[i].num_Matri); getchar();
                printf("Insira seu nome: ");
                fgets(alunos_Vet[i].nome_ALun,sizeof(alunos_Vet[i].nome_ALun), stdin);
                printf("Insira suas notas:\n");

                        for(int j= 0; j < 3; j++){

                            scanf("%f",& alunos_Vet[i].notas[j]); getchar();

                            soma[i] += alunos_Vet[i].notas[j];

                        }

                alunos_Vet[i].media = soma[i] / 3;

            }

            for(int i = 0; i < 1; i++){

                    if(alunos_Vet[i].media > maior){

                    maior = alunos_Vet[i].media;

                    }

            }

        printf("\nAluno com maior media:\n");

            for(int i = 0; i < 2; i++){

                    if(alunos_Vet[i].media == maior){

                        printf("nome: %s", alunos_Vet[i].nome_ALun);
                        printf("Media: %.1f\ns", alunos_Vet[i].media);
                        printf("Notas: %.1f - %.1f - %.1f", alunos_Vet[i].notas[0], alunos_Vet[i].notas[1], alunos_Vet[i].notas[2]);

                    }

            }

            
return 0;

}