algoritmo "salario vendedor"
// Fun��o : Calcular a comiss�o do vendedor em cima do seu s�lario bruto
// Autor : Nailton Sousa - 2�P
// Data : 14/08/2017
// Se��o de Declara��es 
var
  nome: caractere
  salario, totalVendas, salarioFinal: real
inicio
// Se��o de Comandos 

escreval("---- SAL�RIO FINAL DO M�S ---")
escreva("Qual nome do vendedor? ")
leia(nome)

escreva("Qual o sal�rio fixo? ")
leia(salario)

escreva("Qual o total de vendas efetuadas dentro do m�s? ")
leia(totalVendas)

salarioFinal <- salario + (totalVendas * 15 / 100)
escreval()
escreval("O(a) ", nome, " receber� R$", salarioFinal, " reais em cima do seu sal�rio fixo de: R$", salario, " reais")
escreval()
escreva(nome, " recebeu R$ ",  salarioFinal -  salario, " reais de comiss�o")
escreval()







fimalgoritmo
