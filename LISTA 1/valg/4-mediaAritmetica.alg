algoritmo "média aritmética do aluno"
// Função : Calcular média das notas de um aluno
// Autor : Nailton Sousa - 2ªP
// Data : 14/08/2017
// Seção de Declarações 
var
 nome: caractere
 A1, A2, A3, media: real
inicio
// Seção de Comandos 

escreval("---- MÉDIA ARITMÉTICA DO ALUNO ---")
escreva("Qual nome do aluno? ")
leia(nome)

escreva("Qual a nota em A1: ")
leia(A1)

escreva("Qual a nota em A2: ")
leia(A2)

escreva("Qual a nota em A3: ")
leia(A3)

media <- (A1 + A2 + A3) / 3
escreva("O(a) aluno ", nome ," tirou a média: ", media, " no semestre")

fimalgoritmo
