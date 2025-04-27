// ===== Arquivo: main.c =====
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "FilaEstatica.h"

// Função para consultar e imprimir o aluno da frente da fila
void consultar_primeiro(Fila* fi) {
    struct aluno resultado;

    if (consulta_Fila(fi, &resultado)) {
        printf("Aluno na frente da fila:\n");
        printf("Matrícula: %d\n", resultado.matricula);
        printf("Nome: %s\n", resultado.nome);
        printf("Notas: %.2f, %.2f, %.2f\n", resultado.n1, resultado.n2, resultado.n3);
    } else {
        printf("Fila vazia ou não encontrada.\n");
    }
}

// Função para imprimir todos os alunos da fila
void imprime_fila(Fila* fi) {
    if (fi == NULL) {
        printf("Fila não criada.\n");
        return;
    }

    if (Fila_vazia(fi)) {
        printf("Fila vazia.\n");
        return;
    }

    // Criar uma cópia da fila para não alterar a fila original
    Fila* aux = cria_Fila();
    struct aluno temp;

    int tamanho = tamanho_Fila(fi);

    // Copiando os elementos para uma fila auxiliar
    for (int i = 0; i < tamanho; i++) {
        consulta_Fila(fi, &temp);
        insere_Fila(aux, temp);
        remove_Fila(fi);

        printf("Matrícula: %d\n", temp.matricula);
        printf("Nome: %s\n", temp.nome);
        printf("Notas: %.2f, %.2f, %.2f\n", temp.n1, temp.n2, temp.n3);
        printf("--------------------------\n");
    }

    // Restaurando os elementos para a fila original
    for (int i = 0; i < tamanho; i++) {
        consulta_Fila(aux, &temp);
        insere_Fila(fi, temp);
        remove_Fila(aux);
    }

    libera_Fila(aux);
}

int main() {
    setlocale(LC_ALL, "");
    Fila* minha_fila = cria_Fila();

    struct aluno a1 = {123, "Ana", 8.0, 7.5, 9.0};
    struct aluno a2 = {456, "Bruno", 6.0, 6.5, 7.0};
    struct aluno a3 = {789, "Carlos", 9.0, 8.5, 9.5};

    printf("Inserindo alunos na fila...\n\n");

    insere_Fila(minha_fila, a1);
    insere_Fila(minha_fila, a2);
    insere_Fila(minha_fila, a3);

    // Imprimindo a fila atual
    printf("Imprimindo fila atual:\n");
    imprime_fila(minha_fila);

    // Tamanho atual da fila
    printf("\nTamanho atual da fila: %d\n", tamanho_Fila(minha_fila));

    // Consultando o primeiro aluno
    printf("\nConsultando o primeiro aluno da fila:\n");
    consultar_primeiro(minha_fila);

    // Removendo um aluno da fila
    printf("\nRemovendo o aluno da frente...\n\n");
    remove_Fila(minha_fila);

    // Imprimindo a fila novamente
    printf("Imprimindo fila após remoção:\n");
    imprime_fila(minha_fila);

    // Tamanho atual da fila
    printf("\nTamanho atual da fila: %d\n", tamanho_Fila(minha_fila));

    // Consultando novamente
    printf("\nConsultando o novo primeiro aluno da fila:\n");
    consultar_primeiro(minha_fila);

    // Destruindo a fila
    libera_Fila(minha_fila);

    return 0;
}
