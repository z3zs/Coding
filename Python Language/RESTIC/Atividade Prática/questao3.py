# Questão 3 - Elabore um programa que lê o nome e a nota de um aluno, depois exibe esses dados, mas com a nota formatada para exibir apenas uma casa decimal.

nome = input("Insira seu nome: ")
nota = float(input("Insira sua nota: "))

print ("Nome: {}".format(nome), "\nNota: {:.1f}".format(nota))