algoritmo "m�dia aritm�tica do aluno"
// Fun��o : Calcular m�dia das notas de um aluno
// Autor : Nailton Sousa - 2�P
// Data : 14/08/2017
// Se��o de Declara��es 
var
 nome: caractere
 A1, A2, A3, media: real
inicio
// Se��o de Comandos 

escreval("---- M�DIA ARITM�TICA DO ALUNO ---")
escreva("Qual nome do aluno? ")
leia(nome)

escreva("Qual a nota em A1: ")
leia(A1)

escreva("Qual a nota em A2: ")
leia(A2)

escreva("Qual a nota em A3: ")
leia(A3)

media <- (A1 + A2 + A3) / 3
escreva("O(a) aluno ", nome ," tirou a m�dia: ", media, " no semestre")

fimalgoritmo
