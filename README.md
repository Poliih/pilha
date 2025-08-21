# 📚 Estrutura de Dados em C - Pilha

Este projeto implementa uma **pilha** (estrutura de dados do tipo LIFO - *Last In, First Out*) em **C**, utilizando **vetores estáticos**.  
Foram desenvolvidas as operações básicas:

- `empilha()` → Insere (push) um elemento no topo da pilha.  
- `desempilha()` → Remove (pop) e retorna o elemento do topo da pilha.  

---

## ⚙️ Funcionalidades
- Definição de uma pilha com tamanho fixo (`#define tamanho 3`).  
- Inserção de elementos no topo (`empilha`).  
- Remoção de elementos do topo (`desempilha`).  
- Tratamento para pilha cheia e pilha vazia.  

---

## 🛠️ Tecnologias Utilizadas
- Linguagem **C**  
- Biblioteca padrão: `stdio.h` e `stdlib.h`

---

## 📌 Como Compilar e Executar
No terminal, compile e execute:

```bash
gcc pilha.c -o pilha
./pilha
````

---

## 📖 Estrutura do Código

* `struct tipo_pilha`: Define a estrutura da pilha com:

  * `int dado[tamanho];` → Armazena os elementos.
  * `int ini;` e `int topo;` → Controlam início e topo da pilha.
* `empilha(int elemento)`: Adiciona um elemento ao topo.
* `desempilha()`: Remove e retorna o elemento do topo.

---

## 📌 Observação

Este projeto foi desenvolvido como **atividade acadêmica** para praticar o uso de **estruturas de dados em C**, aplicando os conceitos de **pilha** e manipulação de vetores.

