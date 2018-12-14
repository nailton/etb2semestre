algoritmo "preco de venda"
// Função : Calcular preço de venda dado um percentual pelo usuário
// Autor : Nailton Sousa - 2ºP
// Data : 15/08/2017
// Seção de Declarações 
var
   precoCusto, valorVenda, percentualVenda: real
   
inicio
// Seção de Comandos 
escreval("---- CALCULAR PERCENTUAL DE VENDA ----")
escreva("Qual o preço de custo? ")
leia(precoCusto)

escreva("Qual o percentual de venda a ser aplicado? ")
leia(percentualVenda)

valorVenda <-  precoCusto + ((precoCusto * percentualVenda) / 100)
escreval("O percentual aplicado foi ", percentualVenda, "%")
escreva("O valor de venda do produto ficou em: R$", valorVenda, " reais")

fimalgoritmo
