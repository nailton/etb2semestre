algoritmo "rendimento fixo"
// Fun��o : Calcular o rendimento fixo por m�s, a partir de um valor de deposito
// Autor : Nailton Sousa - 2�P
// Data : 14/08/2017
// Se��o de Declara��es 
var
   valorDeposito, RENDIMENTO_FIXO, rendimento: real

inicio
// Se��o de Comandos 
RENDIMENTO_FIXO <- 0.70 //0.70% a. m

escreval("---- RENDIMENTO FIXO ----")
escreva("Qual valor depositado? ")
leia(valorDeposito)

rendimento <- valorDeposito + ((valorDeposito * RENDIMENTO_FIXO) / 100)

escreva("O Valor do rendimento este m�s foi de R$", rendimento, " reais")

fimalgoritmo
