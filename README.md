## Sobre o Instituto 42

A 42 São Paulo é uma universidade sem fins lucrativos que tem como missão gerar profissionais capacitados em engenharia de software desde os fundamentos, e sobre tudo, humanizados e colaborativos. O programa leva como base o ensino fundamentado em projetos. E como não temos professores, todo o conhecimento vem de pesquisas colaboração entre pares.
Para saber mais veja a página da [42 São Paulo](https://www.42sp.org.br/), e a página da matriz [42 Paris](https://42.fr/en/homepage/).

## Projetos

### libft

O projeto libft consiste em criar do zero a biblioteca que será usado no desenvolvimento dos próximos projetos, para cria-lo foi descrito para clonar algumas funções já existentes e criar algumas novas, seguindo diversas limitações.

### get_next_line

O projeto get_next_line é uma função um pouco mais parruda para acrescentar ao libft. Ela consiste em utilizar a função read() da biblioteca unistd.h, para "puxar" uma string com o texto de um arquivo até a quebra de linha.

**Desafios:** Tomar cuidado com os vazamentos de memória, timeouts e controles de erros.

### ft_printf

Está função é um clone parcial da printf original, contemplando apenas as tags (cspdiuxX%).

**Desafios:** Tomar cuidado com os vazamentos de memória, e controle de erros. O printf original tem dezenas de controles de erros e precisei estressar a função original para entender quais controles de erro implementar.
