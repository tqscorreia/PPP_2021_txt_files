<h1 align="center">
      <a href="#" alt=" "> PPP_2021_txt_files </a>
</h1>

<h4 align="center">
	🚧   Concluido   🚧
</h4>

Tabela de conteúdos
=================
<!--ts-->
   * [Sobre o projeto](#-sobre-o-projeto)
     * [Primeira parte](#primeira-parte)
     * [Segunda parte](#segunda-parte)
   * [Funcionalidades](#-funcionalidades)
   * [Como executar o projeto](#-como-executar-o-projeto)

<!--te-->


## 💻 Sobre o projeto

Este programa tem como objetivo permitir a procura de palavras num texto em português, codificado em utf-8, e mostrá-las em contexto.

O programa é dividido em duas partes.

---
## Primeira parte

Lê o ficheiro, isola as palavras e cria um ficheiro com as palavras encontradas.

O programa obtém o nome do ficheiro de texto a processar de um ficheiro de texto chamado "param1.txt" que apenas contém o ficheiro do ficheiro de texto a processar.
Percorre depois o ficheiro de texto, isolando cada palavra e anotando a posição (número de bytes desde o início do ficheiro da primeira letra da palavra) em que essa palavra surge no texto.

As palavras são constituídas apenas por letras(todos os outros carateres devem ser ignorados e considerados separadores).
Só deve considerar palavras com mais de dois carateres.

Identificando uma palvra, esta é escrita num ficheiro de texto chamado "param2.txt" (preservando as maiúsculas/minúsculas, acentos e cedilhas) acompanhada da sua posição no texto. O par palavra/posição é separado pelo sinal '+'. Por exemplo, 'trabalho+347'

---

## Segunda parte

Lê o ficheiro produzido na primeira fase e cria um índice em memória, que permite mostrar em contexto as palavras que o utilizador queira analisar, tambem pode listartodas as palavras que começam por uma determinada letra, ou intervalo de letras.
Mostrar em contexto significa mostrar a palavra em conjunto com palavras que a precedem e lhe sucedem.

O programa obtém o nome do ficheiro de texto a processar de um ficheiro de texto chamado "param3.txt" que apenas contém o ficheiro do ficheiro de texto a processar.
O ficheiro com os pares palavra-posição tem um nome construído como na primeira fase.
O programa lê os pares palavra-posição desse ficheiro e constrói um índice, sob a forma de uma árvore binária. Como cada palavra pode surgir várias vezes no mesmo texto, em cada nó da árvore binária é guardada a raiz para uma lista ligada que contém todas as posições em que a mesma palavra surge.
Considera-se que se trata da mesma palavra se a única diferença forem acentos, cedilhas, ou maiúsculas/minúsculas.
O índice, ou seja, a árvore binária e a lista associada a cada nó, deve ser construído com recurso a memória dinâmica.
Por cada palavra que o utilizador escolha devem ser mostradas todas as ocorrências, dentro do seu contexto, por ordem decrescente da posição em que ocorrem no ficheiro.
O contexto é a frase em que a frase se encontra, bem como a frase anterior. (As frases são delimitadas pelo caráter '.').
O texto não deve ser lido integralmente para memória: a posição de cada palavra, contida no índice, deve ser usada para ler do ficheiro de texto, diretamente, a parte a mostrar como contexto de cada palavra.
O utilizador deve ainda poder pedir para serem listadas todas as palavras que comecem por uma letra, ou gama de letras. Neste caso devem ser listadas todas as ocorrências das palavras nesse intervalo, uma por linha, no formato, "palavra posição1 posição2 posição3 ... posiçãoN" com as posições ordenadas por ordem decrescente.


---

## ⚙️ Funcionalidades

- [x] Criação de grades Sudoku
- [x] Resolução automática de grades Sudoku
- [ ] Resolução manual de grades Sudoku
- [ ] Guardar as grades de Sudoku criadas 



