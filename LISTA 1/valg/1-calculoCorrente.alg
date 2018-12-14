algoritmo "calculo da corrente"
// Função : Cálculo da Corrente
// Autor : Nailton Sousa - 2ºP
// Data : 14/08/2017
// Seção de Declarações 
var
   voltagem, resistencia, corrente: real
inicio
// Seção de Comandos

escreval("--- CALCULO DA CORRENTE ----")
escreva("Entre com a voltagem: ")
leia(voltagem)

escreva("Entre com a resistência: ")
leia(resistencia)

corrente <- voltagem / resistencia

// Transformar em miliampere, como convenção
// se for fração menor que 0 ex: 0.007317A
se corrente < 0.99 entao

   corrente <- corrente * 1000
   escreva("A corrente é: ", corrente, "mA")
   
   senao

     escreva("A corrente é: ", corrente, "A")

fimse



 
fimalgoritmo
