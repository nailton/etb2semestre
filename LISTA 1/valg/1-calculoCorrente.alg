algoritmo "calculo da corrente"
// Fun��o : C�lculo da Corrente
// Autor : Nailton Sousa - 2�P
// Data : 14/08/2017
// Se��o de Declara��es 
var
   voltagem, resistencia, corrente: real
inicio
// Se��o de Comandos

escreval("--- CALCULO DA CORRENTE ----")
escreva("Entre com a voltagem: ")
leia(voltagem)

escreva("Entre com a resist�ncia: ")
leia(resistencia)

corrente <- voltagem / resistencia

// Transformar em miliampere, como conven��o
// se for fra��o menor que 0 ex: 0.007317A
se corrente < 0.99 entao

   corrente <- corrente * 1000
   escreva("A corrente �: ", corrente, "mA")
   
   senao

     escreva("A corrente �: ", corrente, "A")

fimse



 
fimalgoritmo
