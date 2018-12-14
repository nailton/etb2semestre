algoritmo "salario vendedor"
// Função : Calcular a comissão do vendedor em cima do seu sálario bruto
// Autor : Nailton Sousa - 2ºP
// Data : 14/08/2017
// Seção de Declarações 
var
  nome: caractere
  salario, totalVendas, salarioFinal: real
inicio
// Seção de Comandos 

escreval("---- SALÁRIO FINAL DO MÊS ---")
escreva("Qual nome do vendedor? ")
leia(nome)

escreva("Qual o salário fixo? ")
leia(salario)

escreva("Qual o total de vendas efetuadas dentro do mês? ")
leia(totalVendas)

salarioFinal <- salario + (totalVendas * 15 / 100)
escreval()
escreval("O(a) ", nome, " receberá R$", salarioFinal, " reais em cima do seu salário fixo de: R$", salario, " reais")
escreval()
escreva(nome, " recebeu R$ ",  salarioFinal -  salario, " reais de comissão")
escreval()







fimalgoritmo
