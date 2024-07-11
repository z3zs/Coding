# Questão 8 - Faça um programa que leia três números e, em seguida, exiba-os em ordem crescente.

numeros = []

for i in range (0,3):
    numero = input("Insira um número: ")
    numeros.append(numero)
numeros.sort()
print (numeros)