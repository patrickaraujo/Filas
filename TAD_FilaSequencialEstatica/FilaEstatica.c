// ===== Arquivo: FilaEstatica.c =====
#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h"    //    inclui os protótipos

// Definição do tipo Fila
struct fila {
    int inicio, final, qtd;
    struct aluno dados[MAX];
};

// Criando uma fila
Fila* cria_Fila() {
    Fila *fi;
    fi = (Fila*) malloc(sizeof(struct fila));
    if (fi != NULL) {
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }
    return fi;
}

// Destruindo uma fila
void libera_Fila(Fila* fi) {
    free(fi);
}

// Retornando o tamanho da fila
int tamanho_Fila(Fila* fi) {
    if (fi == NULL)
        return -1;
    return fi->qtd;
}

// Retornando se a fila está cheia
int Fila_cheia(Fila* fi) {
    if (fi == NULL)
        return -1;
    if (fi->qtd == MAX)
        return 1;
    else
        return 0;
}

// Retornando se a fila está vazia
int Fila_vazia(Fila* fi) {
    if (fi == NULL)
        return -1;
    if (fi->qtd == 0)
        return 1;
    else
        return 0;
}

// Inserindo um elemento na fila
int insere_Fila(Fila* fi, struct aluno al) {
    if (fi == NULL)
        return 0;
    if (fi->qtd == MAX)
        return 0;
    fi->dados[fi->final] = al;
    fi->final = (fi->final + 1) % MAX;
    fi->qtd++;
    return 1;
}

// Removendo um elemento da fila
int remove_Fila(Fila* fi) {
    if (fi == NULL || fi->qtd == 0)
        return 0;
    fi->inicio = (fi->inicio + 1) % MAX;
    fi->qtd--;
    return 1;
}

// Consultando o primeiro elemento da fila
int consulta_Fila(Fila* fi, struct aluno *al) {
    if (fi == NULL || fi->qtd == 0)
        return 0;
    *al = fi->dados[fi->inicio];
    return 1;
}
