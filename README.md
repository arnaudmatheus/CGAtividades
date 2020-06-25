# Atividades referentes a cadeira de Introdução à Computação Gráfica


## Atividade 1- Algoritimos de rasterização

  A primeira atividade teve como objetivo a familiarização dos alunos com os algoritimos de rasterização utilizados em computação gráfica segue abaixo os resultados obtidos e suas devidas explicações.
  ### Rasterização de Ponto
  
  Parametros usados nos pontos
  ![alt text](https://github.com/arnaudmatheus/CGAtividades/blob/master/imgs/WhatsApp%20Image%202020-06-25%20at%2018.40.53.jpeg)
  
  
  
  ### Rasterização de linha
   Para a rasterização de linhas foi usada a função DrawLine() que pode chamar três funções diferentes todas do algoritmo de Breseham para rasterização de linhas, 
  a função DrawLineEqual() está com o algoritimo de Breseham para quando o se está no primeiro octante com o x e y variando a mesma quantidade de pixels. A função
  DrawlineLow() entra como uma implementação para quando o pixel x tem uma variação maior que o pixel y. Por sua vez a função DrawLineHigh() é chamada quando    
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
