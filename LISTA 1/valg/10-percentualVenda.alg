algoritmo "preco de venda"
// Fun��o : Calcular pre�o de venda dado um percentual pelo usu�rio
// Autor : Nailton Sousa - 2�P
// Data : 15/08/2017
// Se��o de Declara��es 
var
   precoCusto, valorVenda, percentualVenda: real
   
inicio
// Se��o de Comandos 
escreval("---- CALCULAR PERCENTUAL DE VENDA ----")
escreva("Qual o pre�o de custo? ")
leia(precoCusto)

escreva("Qual o percentual de venda a ser aplicado? ")
leia(percentualVenda)

valorVenda <-  precoCusto + ((precoCusto * percentualVenda) / 100)
escreval("O percentual aplicado foi ", percentualVenda, "%")
escreva("O valor de venda do produto ficou em: R$", valorVenda, " reais")

fimalgoritmo
