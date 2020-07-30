# Atividades referentes a cadeira de Introdução à Computação Gráfica


## Atividade 1- Algoritimos de rasterização

  A primeira atividade teve como objetivo a familiarização dos alunos com os algoritimos de rasterização utilizados em computação gráfica segue abaixo os resultados obtidos e suas devidas explicações.
  ### Rasterização de Ponto
  Para a rasterização dos pontos foi feito uma struct de nome pixel com para receber as coordenadas (x,y)  e um array para guardar os valores em RGBA, foi feito 
  uma função PosicaoPix para calcular a posição do pixel de acordo com as cordenadas x e y e por fim a função PutPixel para fazer a renderização do pixel na 
  determinada posição e cor. Abaixo seguem os valores usados para os pixels de origem e de fim da linha e do triângulo
  
  
  ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/WhatsApp%20Image%202020-06-25%20at%2018.40.53.jpeg)
  
  
  
  ### Rasterização de linha
   Para a rasterização de linhas foi usada a função DrawLine() que pode chamar três funções diferentes todas do algoritmo de Breseham para rasterização de linhas, 
  a função DrawLineEqual() está com o algoritimo de Breseham para quando o se está no primeiro octante com o x e y variando a mesma quantidade de pixels. A função
  DrawlineLow() entra como uma implementação para quando o pixel x tem uma variação maior que o pixel y. Por s ua vez a função DrawLineHigh() é chamada quando    
  coordenada y de um pixel tem um deslocamento maior que a coordenada x com essas três funções é garantido o desenho da linha em qualquer um dos octantes desde
  que sejam usada em suas situações apropriadas,essa checagem é feita na função DrawLine() de forma a garantir também que seja usado o pixel mais proximo da,
  origem como ponto de partida. A figura abaixo mostra a implementação do DrawLine().
  
  ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/WhatsApp%20Image%202020-06-25%20at%2018.40.54%20(1).jpeg)

  
  
  ### Rasterização de triângulo
  A função DrawTriangle() realiza esse trabalho usando a função DrawLine() três vezes, essa função por sua vez tem seu funcionamento descrito no item anterior.
  
  ### Resultados obtidos
  A figura abaixo mostra  o resultado obtido tanto da rasterização do triâgulo quanto da linha.
  
   ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/WhatsApp%20Image%202020-06-25%20at%2018.40.54.jpeg)

  
  ### Referencias usadas na atividade 1:
  https://pt.qwe.wiki/wiki/Bresenham%27s_line_algorithm
  https://sig-arq.ufpb.br/arquivos/20202441965ab022028297076a40c2941/2_rasterization.pdf


## Atividade 2- Algoritimos de rasterização


   A segunda atividade consiste em um teste para se checar se o OpenGL está devidamente instalado e para isso foi compilado e executado, com o vídeo da execução
  estando dentro da pasta cujo titulo é essa atividade.
  
  
## Atividade 3- Pipeline grafico

  Pipeline grafico consiste na sequências de passos necessários para transformar uma descrição geométrica/matemática de uma cena 3D em uma representação 2D visual, sendo a imagem final obtida pela rasterização de primitivas projetadas na tela. Basicamente cada passo do pipeçine grafíco consiste em uma transformação geometrica de um espaço para outro sendo eles:
  (Imagem do pipeline Grafico)
  
  Tendo isso em vista a terceira atividade consistiu em a partir de um codigo que representa um pipeline grafico já implementado e a partir dele obter cinco  
  resultados diferentes.
  
### Parte 1
 A primeira parte pediu uma alteração na matriz model para alterar a representação de escala do modelo  ou seja foi uma alteração no dimensionamento do objeto
 de forma a faze-lo ter uma forma diferente da original, no caso como os fatores de escala dados foram 0.33 em x, 1.5 em y e 1 em z basta multiplicar os fatores 
 de  escala pela matriz view de forma assim a ter a matriz view com os novos valores para o fator de escala desejado.
 
 ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/q1code.png)
 ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/q1result.png)
 
### Parte 2
 A segunda pediu um movimento de translação na cena de modo a haver uma translação de (1,0,0), esse movimento foi resolvido na base das tentativas até descobrir 
 qual dos valores da matriz era o responsável pelo deslocamento horizontal já que o único existente, visto que os deslocamentos em y e em z são zero.
  
 ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/q2%20code.png)
 ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/q2result.png)
### Parte 3
A terceira consistiu numa mudança de pespectiva da cena, para tanto foi preciso alterar a matriz projection em dois pontos específicos referentes que dependem do 
parametro d que agora passou a valer 0.5.
![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/q3code.png)
![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/at3result.png)
### Parte 4
A quarta parte pede que mantendo a alteração de pespectiva da cena feita na parte 3 faça-se uma alteração na pespectiva da câmera, nesse ponto foram feitas 
alterações mais significativas no codigo e na matriz view, primeiro foram criados vetores com a posição da camera, o up e para a posição que a camera aponta.A par
tir disso foram encontrados os vetores x,y,z da câmera e esses valores foram colocados de forma a fazer a matriz B transposta como especificado nos slides de aula 
bem como foi feita a matriz T com a matrizview agora resultando da multiplicação de ambas matrizes.

![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/at4code.png)
![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/at4res.png) 

### Parte 5
Na parte final foram pedidas alterações nas matrizes view,model e projection de forma a gerar uma cenas diferente das feitas anteriormente e o resultado foi o 
seguinte.

![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/q5.png)
