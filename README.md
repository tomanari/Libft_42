*Este projeto foi criado como parte do currículo da 42 por <mtomanar>*

# Libft

## Descrição

Libft é o primeiro projeto fundamental do currículo da 42. Seu objetivo é recriar funções essenciais da biblioteca padrão de C, ao mesmo tempo em que se desenvolve um entendimento mais profundo sobre gerenciamento de memória, ponteiros, estruturas de dados e conceitos de programação de baixo nível.

O projeto consiste na construção de uma biblioteca estática personalizada chamada `libft.a`, que pode ser reutilizada em futuros projetos da 42.

Através deste projeto, aprendi como as funções da biblioteca padrão funcionam internamente e obtive experiência prática com gerenciamento manual de memória, programação defensiva e modularização de software.

---

## Visão Geral do Projeto

A biblioteca contém:

* Funções da libc reimplementadas
* Utilitários de manipulação de memória
* Funções de manipulação de strings
* Funções de conversão
* Funções de saída para descritores de arquivo
* Utilitários de gerenciamento de listas encadeadas

Todas as funções foram implementadas seguindo a Norma 42 e compiladas com:

```bash
-Wall -Wextra -Werror
```

---

## Funcionalidades

* Implementação personalizada de funções padrão da biblioteca C
* Alocação e manipulação segura de memória
* Utilitários de processamento de strings
* Utilitários de conversão de inteiros e caracteres
* Funções de saída para descritores de arquivo
* Implementação de lista encadeada simples
* Arquitetura modular e reutilizável
* Código-fonte em conformidade com a Norma

---

## Descrição da Biblioteca

`libft.a` é uma biblioteca estática projetada para fornecer funções utilitárias reutilizáveis para projetos futuros.

### Funções de Caractere

| Função       | Descrição                                  |
| ------------ | ------------------------------------------ |
| `ft_isalpha` | Verifica se um caractere é alfabético      |
| `ft_isdigit` | Verifica se um caractere é um dígito       |
| `ft_isalnum` | Verifica se um caractere é alfanumérico    |
| `ft_isascii` | Verifica se um caractere pertence ao ASCII |
| `ft_isprint` | Verifica se um caractere é imprimível      |
| `ft_toupper` | Converte um caractere para maiúscula       |
| `ft_tolower` | Converte um caractere para minúscula       |

### Funções de String

| Função        | Descrição                                         |
| ------------- | ------------------------------------------------- |
| `ft_strlen`   | Retorna o tamanho da string                       |
| `ft_strchr`   | Encontra a primeira ocorrência de um caractere    |
| `ft_strrchr`  | Encontra a última ocorrência de um caractere      |
| `ft_strncmp`  | Compara strings                                   |
| `ft_strnstr`  | Busca uma string dentro de outra string           |
| `ft_strdup`   | Duplica uma string                                |
| `ft_substr`   | Extrai uma substring                              |
| `ft_strjoin`  | Concatena duas strings                            |
| `ft_strtrim`  | Remove caracteres de ambas as extremidades        |
| `ft_split`    | Divide uma string em substrings                   |
| `ft_strmapi`  | Aplica uma função a cada caractere                |
| `ft_striteri` | Itera pela string aplicando uma função a cada 	|	
				  caractere, passando seu índice                    |

### Funções de Memória

| Função       | Descrição                              |
| ------------ | -------------------------------------- |
| `ft_memset`  | Preenche memória com um byte constante |
| `ft_bzero`   | Zera um bloco de memória               |
| `ft_memcpy`  | Copia memória                          |
| `ft_memmove` | Copia memória sobreposta com segurança |
| `ft_memchr`  | Busca em um bloco de memória           |
| `ft_memcmp`  | Compara blocos de memória              |
| `ft_calloc`  | Aloca e inicializa memória             |

### Funções de Conversão

| Função    | Descrição                    |
| --------- | ---------------------------- |
| `ft_atoi` | Converte string para inteiro |
| `ft_itoa` | Converte inteiro para string |

### Funções de Descritor de Arquivo

| Função          | Descrição                                       |
| --------------- | ----------------------------------------------- |
| `ft_putchar_fd` | Escreve um caractere em um descritor de arquivo |
| `ft_putstr_fd`  | Escreve uma string em um descritor de arquivo   |
| `ft_putendl_fd` | Escreve uma string seguida de uma nova linha    |
| `ft_putnbr_fd`  | Escreve um número em um descritor de arquivo    |

### Funções de Lista Encadeada

| Função             | Descrição                            |
| ------------------ | ------------------------------------ |
| `ft_lstnew`        | Cria um novo nó                      |
| `ft_lstadd_front`  | Adiciona um nó no início             |
| `ft_lstsize`       | Conta os nós da lista                |
| `ft_lstlast`       | Retorna o último nó                  |
| `ft_lstadd_back`   | Adiciona um nó no final              |
| `ft_lstdelone`     | Remove um único nó                   |
| `ft_lstclear`      | Remove a lista inteira               |
| `ft_lstiter`       | Aplica uma função a cada nó          |
| `ft_lstmap`        | Cria uma nova lista transformada     |

---

## Instruções

### Requisitos

* GCC ou Clang
* Make
* Linux ou macOS

### Compilar

```bash
make
```

Isso gera:

```bash
libft.a
```

### Limpar Arquivos Objeto

```bash
make clean
```

### Remover Todos os Arquivos Gerados

```bash
make fclean
```

### Recompilar Tudo

```bash
make re
```

---

## Uso

Inclua o header:

```c
#include "libft.h"
```

Compile seu projeto com a biblioteca:

```bash
gcc main.c libft.a
```

ou

```bash
gcc main.c -L. -lft
```

---

## Escolhas Técnicas

Algumas decisões de implementação tomadas durante o projeto:

* Arquitetura de biblioteca estática
* Organização modular do código-fonte
* Verificações defensivas de alocação de memória
* Funções auxiliares reutilizáveis
* Abstração de lista encadeada através de conteúdo genérico `void *`
* Conformidade estrita com a Norma 42

---

## Testes

O projeto foi validado utilizando:

* Casos de teste personalizados
* Testes de casos extremos
* Norminette
* Análise de memória com Valgrind

Exemplo:

```bash
valgrind --leak-check=full ./program
```

---

## Recursos

### Documentação

* The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
* Páginas de manual do Linux (`man`)
* Documentação POSIX
* Documentação GNU C
* PDF do Subject da 42

### Referências

* https://man7.org/linux/man-pages/
* https://cplusplus.com/
* https://developer.mozilla.org/
* https://www.geeksforgeeks.org/c-programming-language/

### Uso de IA

Ferramentas de Inteligência Artificial foram utilizadas como assistentes de aprendizado para:

* Esclarecimento de conceitos
* Apoio na documentação
* Orientação na depuração de erros
* Compreensão de casos extremos
* Sugestões de revisão de código

Toda a implementação, os testes, a depuração e a validação final foram realizados manualmente pelo autor.

---

## O Que Aprendi

Este projeto fortaleceu meu entendimento sobre:

* Alocação e desalocação de memória
* Aritmética de ponteiros
* Manipulação de strings
* Bibliotecas estáticas
* Listas encadeadas
* Programação defensiva
* Fluxos de trabalho de desenvolvimento UNIX
* Escrita de código C reutilizável

---

## Autor

42 Login: mtomanar

GitHub: https://github.com/tomanari
