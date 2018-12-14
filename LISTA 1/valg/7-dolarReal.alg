algoritmo "dólar para real"
// Função : Calcular o valor em reais de uma entrada em dólar e sua cotação
// Autor : Nailton Sousa - 2ºP
// Data : 14/08/2017
// Seção de Declarações 
var
   valorReal, valorDolar, cotacao: real

inicio
// Seção de Comandos 
escreval("---- DÓLAR PARA REAL ----")

escreva("Quanto em dólar você tem? US$ ")
leia(valorDolar)

escreva("Qual a cotação do dólar hoje? US$ ")
leia(cotacao)

valorReal <- valorDolar * cotacao
escreva("Você tem R$",valorReal, " reais")





fimalgoritmo
