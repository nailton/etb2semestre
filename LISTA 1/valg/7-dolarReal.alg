algoritmo "d�lar para real"
// Fun��o : Calcular o valor em reais de uma entrada em d�lar e sua cota��o
// Autor : Nailton Sousa - 2�P
// Data : 14/08/2017
// Se��o de Declara��es 
var
   valorReal, valorDolar, cotacao: real

inicio
// Se��o de Comandos 
escreval("---- D�LAR PARA REAL ----")

escreva("Quanto em d�lar voc� tem? US$ ")
leia(valorDolar)

escreva("Qual a cota��o do d�lar hoje? US$ ")
leia(cotacao)

valorReal <- valorDolar * cotacao
escreva("Voc� tem R$",valorReal, " reais")





fimalgoritmo
