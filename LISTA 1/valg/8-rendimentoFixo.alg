algoritmo "rendimento fixo"
// Função : Calcular o rendimento fixo por mês, a partir de um valor de deposito
// Autor : Nailton Sousa - 2ºP
// Data : 14/08/2017
// Seção de Declarações 
var
   valorDeposito, RENDIMENTO_FIXO, rendimento: real

inicio
// Seção de Comandos 
RENDIMENTO_FIXO <- 0.70 //0.70% a. m

escreval("---- RENDIMENTO FIXO ----")
escreva("Qual valor depositado? ")
leia(valorDeposito)

rendimento <- valorDeposito + ((valorDeposito * RENDIMENTO_FIXO) / 100)

escreva("O Valor do rendimento este mês foi de R$", rendimento, " reais")

fimalgoritmo
