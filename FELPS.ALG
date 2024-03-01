Algoritmo "felps"

Var
somapositivos, negativos, j, entradanumeros : real
Inicio
j <- 1
negativos <- 0
somapositivos <- 0

enquanto (j <= 20) faca
escreval("digite o ", j, "numero: ")
     leia(entradanumeros)
     se(entradanumeros >= 0)entao
           somapositivos <- somapositivos + entradanumeros
     senao
          negativos <- negativos + 1
     fimse
     j <- j+1

fimenquanto

escreval("somapositivos: ", somapositivos," / negativos: ", negativos)
Fimalgoritmo