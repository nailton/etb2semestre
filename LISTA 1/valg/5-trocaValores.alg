algoritmo "troca valores"
// Fun��o : Trocar valores dado duas entradas AB
// Autor : Nailton Sousa - 2�P
// Data : 14/08/2017
// Se��o de Declara��es 
var
 A, B, temp: real
inicio
// Se��o de Comandos 


escreval("---- TROCA VALORES ----")
escreva("Qual valor para A: ")
leia(A)

escreva("Qual valor para B: ")
leia(B)

temp <- A
A <- B
B <- temp

escreval("Valor de A trocado: ", A)
escreval("Valor de B trocado: ", B)



fimalgoritmo
