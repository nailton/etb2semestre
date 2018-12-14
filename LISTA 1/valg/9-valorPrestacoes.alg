algoritmo "valor das prestacoes"
// Função : Calcular o valor das parcelas a partir de um valor de entrada
// Autor :  Nailton Sousa - 2ºP
// Data : 14/08/2017
// Seção de Declarações 
var
   valorCompra, valorPrestacoes: real
   
inicio
// Seção de Comandos 
escreval("---- CÁLCULO DE PRESTAÇÕES ----")
escreva("Qual o valor do produto? ")
leia(valorCompra)

valorPrestacoes <- valorCompra / 5

escreva("As parcelas ficaram em 5x de R$", valorPrestacoes, " reais")




fimalgoritmo
