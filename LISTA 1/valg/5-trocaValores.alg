algoritmo "troca valores"
// Função : Trocar valores dado duas entradas AB
// Autor : Nailton Sousa - 2ºP
// Data : 14/08/2017
// Seção de Declarações 
var
 A, B, temp: real
inicio
// Seção de Comandos 


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
