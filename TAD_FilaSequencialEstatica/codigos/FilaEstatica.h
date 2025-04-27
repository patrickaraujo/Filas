// ===== Arquivo: FilaEstatica.h =====
#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED

#define MAX 100

// Estrutura de dados do aluno
struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

// Definição do tipo Fila
typedef struct fila Fila;

// Protótipos das funções

// Criando uma fila
Fila* cria_Fila();
// Destruindo uma fila
void libera_Fila(Fila* fi);
// Retornando o tamanho da fila
int tamanho_Fila(Fila* fi);
// Retornando se a fila está cheia
int Fila_cheia(Fila* fi);
// Retornando se a fila está vazia
int Fila_vazia(Fila* fi);
// Inserindo um elemento na fila
int insere_Fila(Fila* fi, struct aluno al);
// Removendo um elemento da fila
int remove_Fila(Fila* fi);
// Consultando o primeiro elemento da fila
int consulta_Fila(Fila* fi, struct aluno *al);

#endif  //  FILAESTATICA_H_INCLUDED
