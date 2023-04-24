Questões resolvidas por Davi Matias Soares Genuino:

E1 - Local Minimum Array
- O algoritmo em questão segue uma estratégia que, ironicamente, acabou sendo idêntica à da dica, mesmo que eu só tenha visto-a depois de resolver a questão. O código funciona de maneira similar à busca binária e, em seu pior caso, que ocorre quando dentro de uma array de tamanho n > 1 não existem mínimos locais conforme especificado pela questão, realiza log₂n repetições antes de retornar o valor final.


E2 - Local Minimum Matrix
- O algorítmo deste exercício foi bastante simples, uma vez que tinha o algorítmo anterior. Uma vez que o pior caso do algorítmo do Exercício 1 é tal que Ω(E1) = log₂n, bastou que um laço percorresse a matriz de tamanho n verificando se os mínimos locais encontrados por E1 (quando existem) também são mínimos locais da matriz de duas dimensões.
	- Não me aventurei no desafio extra, infelizmente, mas creio que para ele bastaria aplicar a mesma lógica do algorítmo binário que usamos no E1, só que, dessa vez, considerando os inteiros encontrados em diferentes colunas (aqueles apontados como mínimos locais em suas respectivas colunas). A complexidade desse algorítmo seria Ω(E2) = (log₂n)², que, a partir de certo n, é sempre inferior à complexidade linear.


E4 - Binary search with duplicates
- O algorítmo deste exercício se resume à uma busca binária comum, com o adendo de que uma vez encontrado o elemento desejado, a busca é refeita considerando apenas os elementos entre o primeiro target encontrado e o início da array. No seu pior caso, quando o elemento alvo está apenas no último elemento da Array, esse algorítmo é da ordem Ω(E4) = log₂n + log₂n = 2log₂n, dito que a busca binária é executada duas vezes, isso parece-me rasoável.


E5 - Hot or cold
- Este algorítmo também se baseia em uma busca binária. As únicas alterações relevantes são que, primeiro, não usaremos ponteiros ou arrays e, segundo, o teste que a busca usará para decidir qual direção seguir é diferente de uma simples comparação. Supondo que a função `string Guess(int x)` seja a usada para chutar um número, basta que a busca binária solicite dois números consecutivos. Se a resposta for "Hot", significa que o número está mais à direita, caso contrário, mais à esquerda. A complexidade, medida em número de chamadas da `Guess`, é Ω(E5) = 2log₂n.


E9 -  Search in a sorted, rotated array
- Um algorítmo muito parecido com a busca binária. Basta que esta última seja codificada considerando que, ao buscarmos elementos maiores que o último elemento à direita da lista, este elemento estará na parte esquerda da lista e, portanto, a direção que a busca binária deve tomar será invertida quando encontrarmos o primeiro elemento da lista já for maior do que o nosso target (e algo similar a isso acontecerá quando procuramos um target menor do que o primeiro elemento, direncionando a busca para a parte direita). Como não serão feitas repetições de passos adicionais, continuaremos com a complexidade Ω(E9) = log₂n.


E10 - Find the jump in the array.
- Mais uma busca binária. O que deve mudar, mais uma vez, é apenas o teste para verificar qual o nosso elemento-alvo. Se a diferença entre o valor de um elemento e o valor do primeiro elemento da array que a busca binária está considerando for igual à  distância entre os seus ponteiros, isso significa que o "salto" não aconteceu em nenhuma parte anterior à esse elemento, logo, a busca busca binária seguirá à direita. Caso contrário, à esquerda. A complexidade permanece igual à da busca binária convencional, onde Ω(E10) = log₂n.


E12 - Sum of two.
- Desta vez, a busca binária não resolve o problema, afinal, as listas não são dadas como ordenadas. Precisamos realmente verificar todos os elementos de B para poder encontrar uma solução válida sempre (que existir uma), e, para cada valores b de B, precisamos observar todas as combinações de valores a₁, a₂ de A. No pior caso deste algorítmo, acabamos por realizar absurdos Ω(E12) = n * n * (n-1) = n³-n² ~ n³ testes no seu pior caso, que ocorre quando não é possível realizar nenhuma soma e, logo, é necessário testar todos os casos.




INSTRUÇÕES DE COMPILAÇÃO:

Caso queira testar quaisquer um dos códigos, tenha em mente que cada um deles possui uma "main()". Valores na implementação desta foram utilizados para testar e compilar cada um dos códigos, portanto, podem ser modificados para testar outros casos de cada problema ou, se desejar, podem ser excluídos junto com a função "main()" para dar lugar a um sistema automatizado de testes.
Tenha em mente que o segundo exercício importa o primeiro arquivo de forma "crua". Logo, a função "main()" do primeiro deve ser comentada ou apagada para que ele funcione. 

O exercício 5 (E5 - Hot or cold) utiliza variáveis globais na sua codificação, e a função "Guess" é a responsável por lidar com elas, uma vez que se tratam da infra-estrutura de um "jogo" que foge ao escopo do problema principal (que seria, no caso, jogar o jogo (: ).
