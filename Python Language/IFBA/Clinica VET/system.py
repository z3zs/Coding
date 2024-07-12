nomes = []
datas = []
tipo_animais = []
continuar = "s"
while continuar.lower() != "n":
    nome_dono = input("Insira o seu nome: ")
    nomes.append(nome_dono)

    data = input("Insira a data desejada para checarmos a disponibilidade: ")
    datas.append(data)

    animal = input("Qual é o seu animal?: ")
    tipo_animais.append(animal)

    continuar = str(input("Deseja fazer uma nova marcação? (S/N): "))

print("Marcação finalizada.")
print("Nomes:", nomes)
print("Datas:", datas)
print("Tipo de animais:", tipo_animais)