# 👉 Filas em Estruturas de Dados

## 🔹 Definição

Uma fila é uma estrutura de dados linear. Na computação funciona como uma fila do dia a dia: como no banco 🏦 ou no cinema 🎬.

- ✨ É um conjunto de itens organizados em ordem, esperando para serem processados.
- 📚 Exemplo prático: documentos esperando para serem impressos.
- 🔄 Funciona com base na política _FIFO_ (_First In, First Out_), ou seja, o primeiro que entra é o primeiro a sair.
- ▶️ A inserção acontece em uma ponta da fila, e a remoção na outra.
- 🔀 Para acessar um item que está no meio, é preciso retirar todos que estão antes dele.

---

## 🔹 Características Principais

- 📦 Inserção (enfileirar): Sempre no final da fila.
- 🔄 Remoção (desenfileirar): Sempre no início da fila.
- 🔍 Acesso: Só é possível acessar o elemento da frente. Para chegar a um elemento específico, é necessário remover todos os anteriores.
- 🔢 Aplicações comuns:
  - 📅 Gerenciamento de processos em sistemas operacionais.
  - 📰 Impressão de documentos (_spooling_).
  - 🏢 Atendimento de requisições em servidores.

---

## 🔹 Tipos de Implementação

1. 📊 Fila Estática (Sequencial)
    - ⚖️ Alocação estática: Tamanho fixo definido em tempo de compilação.
    - 🧵 Armazenamento: _Array_ (vetor) com elementos em posições consecutivas.
    - 🔹 Campos necessários:
        - 🔹 `inicio`: Índice do primeiro elemento.
        - 🔹 `final`: Índice da próxima posição livre.
        - 🔹 `qtd`: Número de elementos atuais.
    - 📈 Vantagens
        - 🔄 Simplicidade de implementação.
        - ⏩ Acesso rápido aos elementos.
    - 📉 Desvantagens
        - 🗓️ Tamanho fixo (pode causar estouro).
        - 💸 Desperdício de memória se subutilizada.
    - 🔢 Indicação: Ideal para filas pequenas ou quando o tamanho máximo é bem definido.

2. 🔰 Fila Dinâmica (Encadeada)
    - ⚖️ Alocação dinâmica: Cresce e diminui conforme a necessidade.
    - 🔗 Armazenamento: Nós alocados em memória, cada um apontando para o próximo.
    - 📈 Vantagens
        - 💪 Tamanho flexível.
        - 🤞 Não desperdiça memória.
    - 📉 Desvantagens
        - 🔄 Acesso sequencial (mais lento para buscar elementos no meio).
        - 🛋️ Overhead de memória por causa dos ponteiros.

--- 

## 🔹 Operações Básicas

As operações fundamentais para manipular uma fila são:

| 🔢 **Operação**         | 💡 **Descrição**                                        | ⏱️ **Complexidade (Estática)** | ⏱️ **Complexidade (Dinâmica)** |
|----------------------|------------------------------------------------------|-----------------------------|-----------------------------|
| `cria_fila()`        | Inicializa a fila.                                   | O(1)                        | O(1)                        |
| `insere_Fila()`      | Insere um elemento no fim da fila.                   | O(1)                        | O(1)                        |
| `remove_Fila()`      | Remove e retorna o primeiro elemento.                | O(1)                        | O(1)                        |
| `consulta_Fila()`    | Retorna o primeiro elemento (sem remover).           | O(1)                        | O(1)                        |
| `Fila_vazia()`       | Verifica se a fila está vazia.                       | O(1)                        | O(1)                        |
| `Fila_cheia()`       | Verifica se a fila está cheia (só estática).         | O(1)                        | -                           |
| `libera_Fila()`      | Libera a memória alocada.                            | O(1)                        | O(n)                        |

---

# 🎓 Filas

✨ Material sobre Filas da disciplina de Estrutura de Dados e seus Algoritmos ✨
