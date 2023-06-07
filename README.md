# Projeto Bakery - Controle de Estoque

O Projeto Bakery é um sistema de controle de estoque desenvolvido como parte de uma atividade prática de Programação Orientada a Objetos (POO). Ele fornece uma solução simples para gerenciar os produtos de uma padaria.

## Funcionalidades

O sistema possui as seguintes funcionalidades:

1. Inserção de itens: é possível adicionar pães, bolachas e bolachas recheadas ao estoque.
2. Listagem de itens: exibe todos os itens presentes no estoque.
3. Controle de modo de exibição: o sistema oferece opções para exibir informações detalhadas ou mensagens resumidas.
4. Interação com outros produtos: além dos itens básicos, é possível adicionar queijos, queijos cottage, presuntos, mortadelas, leite, água, refrigerante e cerveja (com diferentes tipos) ao estoque.
5. Gerenciamento de líquidos: foram adicionadas funcionalidades para controle de leite, água, refrigerante e cerveja, incluindo diferentes tipos de cerveja.

## Utilização

Para utilizar o sistema, siga as instruções abaixo:

1. Abra uma nova pasta no seu computador de trabalho para resolver o exercício.
2. Copie para esta pasta o arquivo anexado e descompacte-o. Certifique-se de que os seguintes arquivos estão presentes:
   - a02ex00.cpp
   - a02ex00.hpp
   - a02ex01_a.cpp
   - a02ex01_a.hpp
   - a02ex03_a.cpp
   - a02ex03_a.hpp
   - a02ex03_b.cpp
   - a02ex03_b.hpp
   - a02ex03_c.cpp
   - a02ex03_c.hpp
   - a02ex03.cpp
   - a02ex03_d.cpp
   - a02ex03_d.hpp
   - a02ex03_e.cpp
   - a02ex03_e.hpp
   - a02ex03.hpp
3. Utilize o script a02ex03.sh para compilar o projeto em shell (bash).
4. Compile o programa e execute-o, utilizando as opções "-v" e "-s". Certifique-se de inserir os dados corretamente, pois o programa não trata erros de entrada.
5. Liste a base de dados inicialmente vazia e verifique o resultado na tela.
6. Insira vários itens (pães, bolachas e bolachas recheadas) em qualquer ordem.
7. Liste a base de dados novamente e verifique o resultado na tela.
8. Repita os passos 6 e 7 quantas vezes desejar.
9. Observe que as opções 2, 3, 6 e 7 do menu de inserção não estão implementadas. Localize no código as chamadas de função correspondentes.
10. Examine os códigos-fonte das classes existentes e altere seus nomes para "Food", "Cracker", "Filled Wafer" e "Bread" para manter a coerência com o programa.
11. Crie as classes "Cheese", "Cottage Cheese", "Ham" e "Mortadella", baseando-se nas classes existentes. "Cottage Cheese" deve ser derivada de "Cheese", e as demais devem ser derivadas de "Food".
12. Altere o programa adicionando os métodos:
    - void insertCheese(void);
    - void insertCottageCheese(void);
    - void insertHam(void);
    - void insertMortadella(void);
   Não se esqueça de incluir os #include's necessários para utilizar as novas classes.
13. Insira as chamadas apropriadas para os novos métodos, a fim de que o menu de inserção de itens funcione completamente.
14. Observe que é possível listar a base de dados, incluindo os novos itens, sem alterar o código da função void listItems(). Isso é possível graças ao polimorfismo. Estude a função para compreendê-la em detalhes.
15. Estude todos os elementos desta linha: `cout << " @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;`
16. Estude a função void clearAll(). Observe que ela está incorreta. Localize e corrija o erro.
17. Todas as funções que estão em a02ex03.cpp são iguais às da programação estruturada, no sentido de que não pertencem a classes (não são métodos). Portanto, o programa é mais "C com classes" do que "orientado a objetos". Reverta essa situação da seguinte maneira:
18. Crie uma classe "MyProgram" que encapsule as funções de a02ex03.cpp como métodos privados.
19. Defina verboseMode, shortMessageMode e myMainList como atributos privados de MyProgram. Isso elimina as variáveis globais.
20. Crie os métodos públicos get/set para verboseMode e shortMessageMode.
21. Crie um método público void start() para MyProgram, que conterá todo o conteúdo da antiga função main, exceto verifyArguments(argc, argv). Elimine a função main atual de a02ex03.cpp e mantenha apenas o método start.
22. Crie os arquivos hpp e cpp com o nome "FT_bakery" e crie a função main nele. Essa será a nova entrada do programa.
23. Passe void verifyArguments(int argc, char* argv[]) para FT_bakery, fazendo os ajustes necessários nos arquivos hpp e cpp.
24. Na função main (que agora está somente em FT_bakery), crie dinamicamente um objeto MyProgram, utilize os métodos set para ajustar verboseMode e shortMessageMode e chame o método start. Dessa forma, todo o processamento ficará a cargo do objeto e não de funções soltas.
25. A padaria começará a vender leite, água, refrigerante e cerveja. Crie uma classe "Liquid" derivada de "Food" com os atributos comuns a todos esses novos produtos.
26. Crie as classes "Milk", "Water", "Soda" e "Beer". Além disso, crie quatro classes derivadas de Beer correspondentes a diferentes tipos de cerveja.
27. Altere MyProgram para acomodar esses novos produtos. No menu de inserção, ao escolher "Beer", um novo submenu deve ser aberto somente com os tipos de cerveja. Implemente o código de acordo com a estrutura fornecida.
28. Observe que é possível continuar com o programa sem alterar o código das funções void listItems() e void clearAll().
29. Faça a limpeza do código: elimine #include's desnecessários, ajuste a formatação, remova trechos de código comentado (exceto comentários de documentação), ordene os métodos e verifique se os escopos de visibilidade estão adequados.

## Observações

Este programa foi desenvolvido como uma solução simples para o controle de estoque de uma padaria, sendo um exemplo básico de aplicação de conceitos de Programação Orientada a Objetos. É importante destacar que o programa não trata erros de entrada e possui funcionalidades limitadas. Portanto, é fundamental executá-lo com atenção às entradas de dados e entender suas limitações.

## Contribuição

Contribuições para a melhoria deste projeto são sempre bem-vindas. Sinta-se à vontade para abrir uma issue ou enviar um pull request com sugestões, correções ou adições.

## Autores
O projeto Bakery foi desenvolvido por [Gediel](https://github.com/Gediel99), [Filipe](https://github.com/FilipeJN), [Brenno](https://github.com/brennocm), [Lucas](https://github.com/exemplo) e [Pedro](https://github.com/cocronut). Agradecemos a todos que contribuíram para a criação e aprimoramento deste sistema de controle de estoque.
