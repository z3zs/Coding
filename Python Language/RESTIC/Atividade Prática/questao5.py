# Questão 5 - Dê um exemplo de uso da estrutura condicional aninhada (if, elif e else).
nomes = []
for i in range (0,3):
    nome = str(input("Qual seu nome? "))
    nomes.append(nome)
    if nome.lower() == "clay":
        print ("Parando...")
        break
    elif nome.lower() == "jojo":
        print ("Parando...")
        break
    else:
        nomes.append(nome)
print("Nomes mencionados: ")
for nome in nomes:
    print(nome)